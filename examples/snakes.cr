require "crsfml"


Left = SF.vector2(-1, 0)
Up =  SF.vector2(0, -1)
Right =  SF.vector2(1, 0)
Down = SF.vector2(0, 1)
Directions = [Left, Up, Right, Down]


# Missing functionality from Ruby
module Enumerable
  def drop(n)
    self[n...size]
  end
end

def random_color()
  SF.color(rand(128) + 128, rand(128) + 128, rand(128) + 128)
end


struct Food
  include SF::Drawable

  property position
  property color

  def initialize(@position : SF::Vector2(Int32), @color : SF::Color)
  end

  def draw(target, states)
    circle = SF::CircleShape.new(0.9/2)
    circle.position = position + {0.05, 0.05}
    circle.fill_color = @color
    target.draw circle, states
  end
end

class Snake
  include SF::Drawable

  @direction : SF::Vector2(Int32)

  getter body : Array(SF::Vector2(Int32))

  def initialize(@field : Field, start, @color : SF::Color)
    @direction = Up
    @body = [] of SF::Vector2(Int32)
    (0...3).each do |i|
      @body.push(start + {0, i})
    end
  end

  def step()
    head = @body[0] + @direction
    head.x %= @field.size.x
    head.y %= @field.size.y
    @body.insert(0, head)
    @body.pop()
  end

  def turn(direction)
    @direction = direction unless @body[1] == @body[0] + direction
  end

  def grow()
    tail = @body[-1]
    3.times do
      @body.push tail
    end
  end

  def collides?(other : self)
    other.body.any? { |part| @body[0] == part }
  end

  def collides?(food : Food)
    @body[0] == food.position
  end

  def collides?()
    @body.drop(1).any? { |part| @body[0] == part }
  end

  def draw(target, states)
    @body.each_with_index do |current, i|
      segment = SF::CircleShape.new(0.9 / 2)
      segment.position = current + {0.05, 0.05}
      segment.fill_color = @color
      target.draw segment, states

      # The following is eye candy and may be removed
      # but change the above to RectangleShape of size (0.9, 0.9)

      # Look in 4 directions around this segment. If there is another one
      # neighboring it, draw a square between them
      Directions.each do |d|
        td = current + d
        td.x %= @field.size.x
        td.y %= @field.size.y

        if (i > 0 && td == @body[i-1]) ||\
        (i < @body.size-1 && td == @body[i+1])
          connection = SF::RectangleShape.new({0.9, 0.9})
          connection.position = current + d / 2.0 + {0.05, 0.05}
          connection.fill_color = @color
          target.draw connection, states
        end
      end

      # Draw eyes with a darkened color
      eye = SF::CircleShape.new(0.2/2)
      eye.fill_color = SF.color(
        @color.r / 3, @color.g / 3, @color.b / 3
      )

      delta = SF.vector2(
        @direction.y.abs / 4.0,
        @direction.x.abs / 4.0
      )
      eye.position = @body[0] + {0.4, 0.4} + delta
      target.draw eye, states
      eye.position = @body[0] + {0.4, 0.4} - delta
      target.draw eye, states
    end
  end
end

class Field
  include SF::Drawable

  getter size : SF::Vector2(Int32)

  def initialize(@size : SF::Vector2(Int32))
    @snakes = [] of Snake
    @foods = [] of Food
  end

  def add(snake)
    @snakes.push snake
  end

  def step()
    while @foods.size < @snakes.size + 1
      food = Food.new(SF.vector2(rand(@size.x), rand(@size.y)), random_color())

      @foods.push food unless @snakes.any? do |snake|
        snake.body.any? { |part| part == food.position }
      end
    end

    @snakes.each do |snake|
      snake.step()

      @foods = @foods.reject do |food|
        if snake.collides? food
          snake.grow()
          true
        end
      end
    end

    snakes = @snakes
    @snakes = snakes.reject do |snake|
      snake.collides? ||\
      snakes.any? { |snake2| snake != snake2 && snake.collides? snake2 }
    end
  end

  def draw(target, states)
    @snakes.each do |snake|
      target.draw snake, states
    end
    @foods.each do |food|
      target.draw food, states
    end
  end
end


field = Field.new(SF.vector2(40, 40))

snake1 = Snake.new(field, field.size / 2 - {5, 0}, random_color())
snake2 = Snake.new(field, field.size / 2 + {5, 0}, random_color())
field.add snake1
field.add snake2

scale = 20

window = SF::RenderWindow.new(
  SF::VideoMode.new(field.size.x*scale, field.size.y*scale), "Snakes",
  settings: SF::ContextSettings.new(depth: 24, antialiasing: 8)
)
window.vertical_sync_enabled = true
window.framerate_limit = 10


transform = SF::Transform::Identity
transform.scale scale, scale

states = SF::RenderStates.new(transform: transform)

while window.open?
  while event = window.poll_event()
    if event.is_a?(SF::Event::Closed) ||\
    (event.is_a?(SF::Event::KeyPressed) && event.code.escape?)
      window.close()
    elsif event.is_a? SF::Event::KeyPressed
      case event.code
        when .a?
          snake1.turn Left
        when .w?
          snake1.turn Up
        when .d?
          snake1.turn Right
        when .s?
          snake1.turn Down

        when .left?
          snake2.turn Left
        when .up?
          snake2.turn Up
        when .right?
          snake2.turn Right
        when .down?
          snake2.turn Down
      end
    end
  end

  field.step()

  window.clear SF::Color::Black
  window.draw field, states

  window.display()
end
