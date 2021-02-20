def comp(array1, array2):
    print(array1)
    print(array2)
    if array1 == None or array2 == None or len(array1) != len(array2): return False
    if not array1 and not array2: return True
    array1 = sorted(map(abs, array1))
    array2 = sorted(array2)
    for idx, val in enumerate(array1):
        if val**2 != array2[idx]:
            return False
    return True