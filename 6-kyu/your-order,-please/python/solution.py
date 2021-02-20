import re

def order(sentence):
    ord = re.findall(r'\d+', sentence)
    words = sentence.split()
    d = dict(sorted(dict(zip(map(int, ord), words)).items()))
    return " ".join(d.values())