a=True
b=False
c=True

if a==True:
    print("At",end='')
else:
    print("Yo",end='')

if a == False and b == True:
    print("Bo",end='')
elif b == False or c == True:
    print("Co",end='')

if a == True and b == True and c == True:
    print("foo!")
elif True and False:
    print("yeah!")
elif a == False or c ==True:
    print("der")