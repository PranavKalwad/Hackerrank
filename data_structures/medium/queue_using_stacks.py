q = int(input().strip())
s1, s2 = [], []
for _ in range(q):
    ops = input().strip().split()
    if len(ops) == 2:
        s1.append(ops[1])
    else:
        if len(s2) == 0:
            while s1:
                s2.append(s1.pop())
        if ops[0] == '2':
            s2.pop()
        else:
            print(s2[-1]) 