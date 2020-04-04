n = int(input())

lst = list()
for t in range(n):
    x = input()
    y = float(input())
    temp = list()
    temp.append(y)
    temp.append(x)
    lst.append(temp)

s_li = sorted(lst)

m1 = s_li[0][0]
m2 = +99999999999999
ans = list()

for x in lst:
    if(x[0]!= m1 and x[0]<=m2):
        m2 = x[0]


for x in lst:
    if(x[0] == m2):
        ans.append(x[1])

ans.sort()
for x in ans:
    print(x)
