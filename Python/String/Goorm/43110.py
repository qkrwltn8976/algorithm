# -*- coding: utf-8 -*-
# UTF-8 encoding when using korean
user_input = raw_input()
tmp = ""
size = 0
if len(user_input) % 2==0:
	size = len(user_input)/2
else:
	size = len(user_input)/2+1
for i in range(0, size):
	if i != len(user_input)-i-1:
		tmp+=user_input[i] + user_input[len(user_input)-i-1]
	else:
		tmp+=user_input[i]
print tmp