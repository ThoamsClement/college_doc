for i in range(1,8):
    if i == 1:
        print("*")
        break
    else:
        print(" ", end="")
for j in range(8, 1,-1):
    for i in range(1,8):
        if i == j:
            print("*",end="")
        elif i == 15 -j:
            print("*")
            break
        else:
            print(" ",end="")
            