x = int(input())
dic = {}
a =[input().split() for i in range(x)]
for k, v in a:
    dic[k] = v
print(dic)
while True:
    try:
        v = input()
        if v in dic:
            print(v +"="+ dic[v])
        else:
            print("Not found")
    except Exception as e:
        print(e)
