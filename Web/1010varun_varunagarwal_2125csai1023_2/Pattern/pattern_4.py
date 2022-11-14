n = int(input())
j = 0
for i in range(n, 0, -1):
    print("     "*j, end = "")
    print("*    "*i, end = "")
    j += 1
    print()
    