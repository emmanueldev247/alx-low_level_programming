#!/c/Users/user/AppData/Local/Programs/Python/Python311/python
#!/usr/bin/python3

def island_perimeter(grid):
    totalPer = 0

    rowSize = len(grid)
    colSize = len(grid[0])

    print(rowSize) #5
    print(colSize) #6

    for x in range (rowSize):
        for y in range(colSize):
            perEach = 4
            if grid[x][y] == 1:
                print(f"cell: grid[{x}][{y}]")
                try:
                    if grid[x][y+1] == 1:
                        perEach -= 1
                    else:
                        print("no")
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
                    if grid[x-1][y+1] == 1:
                        perEach -= 1
                except:
                    pass

            totalPer += perEach

    return totalPer
