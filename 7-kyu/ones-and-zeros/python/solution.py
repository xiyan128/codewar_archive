def binary_array_to_number(arr):
    return sum([val * 2**idx for idx, val in enumerate(arr[::-1])])