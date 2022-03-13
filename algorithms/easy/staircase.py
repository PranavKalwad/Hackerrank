def staircase(n):
    for x in range(1, n+1):
        print(" " * (n - x) + "#" * x )