n = int(input())
arr = input().split()
arr = list(map(int, arr))

s_li = sorted(arr)
val = s_li[-1]
for i in range(len(s_li) - 1,-1, -1 ):
    if s_li[i]!= val:
        print(s_li[i])
        break
