def birthdayCakeCandles(candles):
    max=0
    candles.sort()
    for i in range(0,len(candles)):
        if candles[i] == candles[len(candles)-1]:
            max+=1
    return max