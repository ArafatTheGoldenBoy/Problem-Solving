# Power of Thor - Episode 1
# https://www.codingame.com/ide/puzzle/power-of-thor-episode-1
# WHAT YOU LEARNED, The solution to this puzzle lies in the following concepts. If you consider that youve acquired the skills listed below, tick the corresponding boxes (and theyll appear on your learning profile). If not, brush up on your knowledge and try again!
import sys
import math
from typing_extensions import LiteralString

# Auto-generated code below aims at helping you parse
# the standard input according to the problem statement.
# ---
# Hint: You can use the debug stream to print initialTX and initialTY, if Thor seems not follow your orders.

# light_x: the X position of the light of power
# light_y: the Y position of the light of power
# initial_tx: Thor's starting X position
# initial_ty: Thor's starting Y position
light_x, light_y, initial_tx, initial_ty = [int(i) for i in input().split()]
x, y = initial_tx, initial_ty

# game loop
while True:
    remaining_turns = int(
        input()
    )  # The remaining amount of turns Thor can move. Do not remove this line.
    if light_x > initial_tx and light_y > initial_ty:  # 20>5  and 12>8
        x += 1
        if y == light_y:
            y = light_y
            print("E")
        else:
            y += 1
            print("SE")
    elif light_x > initial_tx and light_y < initial_ty:  # 20>5  and 12<8
        x += 1
        if y == light_y:
            y = light_y
            print("E")
        else:
            y -= 1
            print("NE")
    elif light_x < initial_tx and light_y > initial_ty:  # 20<5  and 12>8
        x -= 1
        if y == light_y:
            y = light_y
            print("W")
        else:
            y += 1
            print("SW")

    elif light_x < initial_tx and light_y < initial_ty:  # 20<5  and 12<8
        x -= 1
        if y == light_y:
            y = light_y
            print("W")
        else:
            y -= 1
            print("NW")
    elif light_x < initial_tx and light_y == initial_ty:
        print("W")
    elif light_x == initial_tx and light_y < initial_ty:
        print("N")
    elif light_x > initial_tx and light_y == initial_ty:
        print("E")
    elif light_x == initial_tx and light_y > initial_ty:
        print("S")
    # Write an action using print
    # To debug: print("Debug messages...", file=sys.stderr, flush=True)
    print("Debug messages...x,y: ", x, y, file=sys.stderr, flush=True)

    # A single line providing the move to be made: N NE E SE S SW W or NW
