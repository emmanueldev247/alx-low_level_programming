#!/c/Users/user/AppData/Local/Programs/Python/Python311/python
#!/usr/bin/python3

def island_perimeter(grid):
    totalPer = 0

    rowSize = len(grid)
    colSize = len(grid[0])

    for x in range (rowSize):
        for y in range(colSize):
            if grid[x][y] == 1:
                perEach = 4
                try:
                    if grid[x][y+1] == 1:
                        perEach -= 1
                except:
                    pass
                try:
                    if grid[x][y-1] == 1:
                        perEach -= 1
                except:
                    pass
                try:
                    if grid[x+1][y] == 1:
                        perEach -= 1
                except:
                    pass
                try:
                    if grid[x-1][y] == 1:
                        perEach -= 1
                except:
                    pass

                totalPer += perEach
                print(f"cell: grid[{x}][{y}]", end=" ")
                print(f'PerEach: {perEach}')
                print(f'total: {totalPer}')

    return totalPer
