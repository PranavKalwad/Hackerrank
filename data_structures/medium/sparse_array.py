strings=[]
queries=[]
counts=[]
n=int(input())
for i in range(0,n):
    strings.append(input())
q=int(input())
for i in range(0,q):
    queries.append(input())
for i in range(0,q):
    if queries[i] in strings:
        counts.append(strings.count(queries[i]))
    else:
        counts.append(0)