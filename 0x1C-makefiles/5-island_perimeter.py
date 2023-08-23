#!/usr/bin/python3
# function  that returns the perimeter of the island


def island_perimeter(grid):
    # returns the perimeter of the island 
    total = 0
    for i in grid:
        for x in i:
            if x == 1:
                total += 1
    area = (total + 1) * 2
    return area
