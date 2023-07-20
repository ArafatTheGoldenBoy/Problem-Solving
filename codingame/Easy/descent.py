# the-descent
# https://www.codingame.com/ide/puzzle/the-descent
# WHAT WILL I LEARN?
# Solving this puzzle makes you understand the concept of loops and the ways of retrieving the maximum value from a list of integers.
# This puzzle can also be a playground to experiment the concept of lambdas in different programming languages. Its also an opportunity to discover functional programming.
import sys
import math

# The while loop represents the game.
# Each iteration represents a turn of the game
# where you are given inputs (the heights of the mountains)
# and where you have to print an output (the index of the mountain to fire on)
# The inputs you are given are automatically updated according to your last actions.


# game loop
while True:
    mount = [0, 0, 0, 0, 0, 0, 0, 0]
    max = 0
    for i in range(8):
        mountain_h = int(input())
        mount[i] = mountain_h
    for i in range(8):
        if mount[i] > max:  # 7 > 5
            max = mount[i]

    # Write an action using print
    # To debug: print("Debug messages...", file=sys.stderr, flush=True)

    # The index of the mountain to fire on.
    print(mount.index(max))
