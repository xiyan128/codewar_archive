def validBraces(string):
    l = []
    for ch in string:
        if ch in "([{":
            l.append(ch)
        elif not l:
            return False
        elif l[-1] == '[' and ch == ']' or l[-1] == '(' and ch == ')' or l[-1] == '{' and ch == '}':
            l.pop()
    return not l
            