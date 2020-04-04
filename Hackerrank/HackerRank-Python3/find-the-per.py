n = int(input())
hash = dict()
for t in range(n):
    arr = input().split()
    x = arr[0]
    y = arr[1:]
    hash[x] = y


name = input()
val = hash[name]

sum = 0.0
for x in val:
    sum += float(x)

print("{0:.2f}".format(sum/3))
