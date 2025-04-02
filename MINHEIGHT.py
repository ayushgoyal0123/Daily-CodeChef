# cook your dish here
t=int(input())
for _ in range(t):
    x,h=map(int,input().split())
    print("YES" if x>=h else 'NO')