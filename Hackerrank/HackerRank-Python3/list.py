n = int(input())

arr = list()
for t in range(n):
    x = input().split()
    if( x[0] == 'insert'):
        #code
        arr.insert(int(x[1]), int(x[2]))
    elif x[0] == 'print':
        print(arr)
    elif x[0] == 'remove':
        #code
        arr.remove(int(x[1]))
    elif x[0] == 'append':
        arr.append(int(x[1]))
    elif x[0] == 'pop':
        arr.pop()
    elif x[0] == 'sort':
        arr.sort()
    elif x[0] == 'reverse':
        arr.sort(reverse = True)
