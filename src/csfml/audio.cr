# Copyright (C) 2015 Oleh Prypin <blaxpirit@gmail.com>
# 
# This file is part of CrSFML.
# 
# This software is provided 'as-is', without any express or implied
# warranty. In no event will the authors be held liable for any damages
# arising from the use of this software.
# 
# Permission is granted to anyone to use this software for any purpose,
# including commercial applications, and to alter it and redistribute it
# freely, subject to the following restrictions:
# 
# 1. The origin of this software must not be misrepresented; you must not
#    claim that you wrote the original software. If you use this software
#    in a product, an acknowledgement in the product documentation would be
#    appreciated but is not required.
# 2. Altered source versions must be plainly marked as such, and must not be
#    misrepresented as being the original software.
# 3. This notice may not be removed or altered from any source distribution.

module SF
  extend self
  
  class Sound
    def initialize(buffer: SoundBuffer)
      initialize()
      self.buffer = buffer
    end
  end
  
  class SoundRecorder
    def self.get_available_devices
      ptr = CSFML.sound_recorder_get_available_devices(out count)
      result = [] of String
      (0...count).each do |i|
        result.push ptr[i].to_s
      end
      result
    end
  end
end

require "./audio_obj"