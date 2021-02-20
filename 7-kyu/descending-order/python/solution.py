def descending_order(num):
    r = str(num)
    r = sorted(r)[::-1]
    return int("".join(r))
    # Bust a move right here