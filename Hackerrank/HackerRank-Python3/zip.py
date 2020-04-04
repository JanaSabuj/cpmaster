val = input().split()
# print(val)
x = int(val[0])
y = int(val[1])

arr = list()

for t in range(y):
    r = input().split()
    a = list()
    for i in range(len(r)):
        a.append(float(r[i]))
    arr.append(a)


zipped = zip(*arr)

for x in zipped:
    sum=0.0
    for val in x:
        sum += val
    print("{0:.1f}".format(sum/y))
