# cook your dish here
t=int(input())
for _ in range(t):
    x,y =map(int,input().split())
    print(x-y if x-y>=0 else 0 )