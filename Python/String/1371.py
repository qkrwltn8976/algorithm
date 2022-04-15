import sys

line = sys.stdin.read()

word = [0] * 26

for s in line:
    if s.islower():
        word[ord(s)-97] += 1

for i in range(26):
    if max(word) == word[i]:
        print(chr(i+97), end="")