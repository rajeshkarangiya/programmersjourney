x = input()
for i in x:
    c = x.index(i)
    b = x[c]
    if b == b.upper():
        print(x[c].swapcase(), end="")
    else:
        print(x[c].swapcase(), end="")
print("\n")
for i in x:
        for j in x:
            if i == " ":
                b = x.index(" ")
                for i in x[b::1]:
                    print(i, end="")
                print(" ", end="")
                for i in x[:b:1]:
                    print(i, end="")


