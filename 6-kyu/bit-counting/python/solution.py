def countBits(n):
    count = 0
    while (n != 0):
        count += 1 if n%2==1 else 0
        n//=2
    return count