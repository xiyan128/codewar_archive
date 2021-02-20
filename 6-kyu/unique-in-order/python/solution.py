from functools import reduce

def unique_in_order(iterable):
    result = [];
    for (idx, item) in enumerate(iterable):
        if item != iterable[idx-1]:
            result.append(item);
    if not result and iterable:
        result += iterable[0]
    return result