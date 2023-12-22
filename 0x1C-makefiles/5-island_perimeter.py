#!/usr/bin/python3
"""defines a funtion island_perimeter(grid) that returns a value"""


def island_perimeter(grid):
    """function that returns the perimeter of the island described in grid"""
    totalPer = 0

    rowSize = len(grid)
    colSize = len(grid[0])

    for x in range(rowSize):
        for y in range(colSize):
            if grid[x][y] == 1:
                perEach = 4
                if (y != colSize - 1):
                    if grid[x][y+1] == 1:
                        perEach -= 1

                if (y != 0):
                    if grid[x][y-1] == 1:
                        perEach -= 1

                if (x != rowSize - 1):
                    if grid[x+1][y] == 1:
                        perEach -= 1

                if (x != 0):
                    if grid[x-1][y] == 1:
                        perEach -= 1

                totalPer += perEach

    return totalPer
