# Enter your code here. Read input from STDIN. Print output to STDOUT
n = int(input())
dic = dict()
a = [input().split() for i in range(n)]
for k,v in a:
    dic[k] = v
i=0
while i<n:
    try:
        e = input()
        if e in dic:
            print(e + "=" + dic[e])
        else:
            print("Not found")
    except EOFError:
            break
    i+=1