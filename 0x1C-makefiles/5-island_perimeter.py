#!/usr/bin/python3
"""function  that returns the perimeter of the island"""


def island_perimeter(grid):
    """returns the perimeter of the island"""
    row = len(grid)
    col = len(grid[0])
    total = 0
    for i in range(row):
        for j in range(col):
            if grid[i][j] == 1:
                total += 4
                if i > 0 and grid[i - 1][j] == 1:
                    total -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    total -= 2
    return total
