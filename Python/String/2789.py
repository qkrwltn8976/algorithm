import sys
import re

input = sys.stdin.readline
s = input()

print(re.sub("[CAMBRIDGE]", "", s))