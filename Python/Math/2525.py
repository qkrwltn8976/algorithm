hour, min = map(int, input().split())
n = int(input())
min += n

if min >= 60:
    hour += min // 60
    if hour >= 24:
        hour -= 24
    min -= min // 60 * 60
print(hour, min)
    