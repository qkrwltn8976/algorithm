tstring = "{b} {c} d {d} {i}"
variables = [["b", "{c}"], ["a", "{b}"], ["e", "{f}"], ["h", "i"], ["d", "{e}"], ["f", "{d}"], ["c", "d"]]

class Default(dict):
    def __missing__(self, key): 
        return key.join("{}")
variables = Default(dict(variables))

while tstring != tstring.format_map(variables):
    print(tstring)
    tstring = tstring.format_map(variables)

print(tstring)