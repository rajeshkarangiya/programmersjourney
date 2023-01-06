n = int(input().strip())
x = bin(n)
y = x.replace("0b", "")
a = 0
b = 0
for i in y:
    if i == "1":
        a += 1
        if a > b:
            b = a
    elif i == "0":
        a = 0
print(b)
