a,b,c = map(int, input().split())
if a<b and b<c:
    print("Yes\n")
elif a>b and b>c:
    print("Yes\n")
elif a==b or b==c:
    print("Yes\n")
else:
    print("No\n")