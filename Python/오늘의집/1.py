path = "SSSSSSWWWNNNNNN"
dir = {"W": 0, "S": 1, "E":2, "N":3}
time = 0
check = path[0]
dist = 0
def findDir(fr, to):
    idx = (fr - to) % 4
    if idx == 1:
        return "right"
    elif idx == 3:
        return "left"

for i in range(1, len(path)):
    if check != path[i]:
        if i-dist > 5:
            time = i-5
            var = 500
        else:
            var = (i-dist)*100
        print("Time ", time, ":", "Go stringht ", str(var), " and turn ",findDir(dir[check], dir[path[i]]), sep="")
        check = path[i]
        time = i
        dist = i
["Time 0: Go straight 300m and turn right","Time 3: Go straight 400m and turn left","Time 5: Go straight 500m and turn left"]
["Time 0: Go straight 300m and turn right","Time 3: Go straight 100m and turn left","Time 5: Go straight 500m and turn left"]