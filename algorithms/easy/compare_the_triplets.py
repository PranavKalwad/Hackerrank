def compareTriplets(a, b):
    alice=0;
    bob=0;
    for i in range(0,len(a)):
        if a[i]>b[i]:
            alice+=1
        if b[i]>a[i]:
            bob+=1
    return alice,bob