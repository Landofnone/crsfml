#!/bin/bash

# ./diff.sh [COMMIT1 [COMMIT2]]
# Show the difference between generated files at (COMMIT1 or HEAD) and (COMMIT2 or current state)

set -o errexit

case $# in
2)
    a="$(git show $1:generate.cr)"
    b="$(git show $2:generate.cr)"
    ;;
1)
    a="$(git show $1:generate.cr)"
    b="$(cat generate.cr)"
    ;;
0)
    a="$(git show HEAD:generate.cr)"
    b="$(cat generate.cr)"
    ;;
esac

tmp="$(mktemp -d)"
cd "$tmp"
mkdir a b

(cd a && echo "$a" | CRYSTAL_CACHE_DIR=../.a crystal eval) &
pid_a=$!
(cd b && echo "$b" | CRYSTAL_CACHE_DIR=../.b crystal eval) &
pid_b=$!

wait $pid_a
wait $pid_b

git diff --no-index --no-prefix a b || true

rm -r "$tmp"
