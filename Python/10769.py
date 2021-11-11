s = input()
smile = s.count(":-)")
sad = s.count(":-(")
if smile + sad > 0:
    if smile == sad:
        print("unsure")
    elif smile > sad:
        print("happy")
    else:
        print("sad")
else:
    print("none")
