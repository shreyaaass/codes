n=int(input())
for i in range(n):
    x,y=map(int,input().split())
    s=input()
    for k in range(y):
        l,r=map(int,input().split())
        count=0
        minus=0
        plus=0
        for j in s[l-1:r]:
            #print(j)
            if j=='-':
                count=count-1
                minus+=1
            else:
                count=count+1
                plus+=1
        if(count<0):
            if(-count>minus):
                print(minus+plus,'l')
            else:
                print(minus+plus+count-1,"m")
        elif(count>0):
            if(count>plus):
                print(minus+plus,"n")
            else:
                print(minus+plus-count+1,"o")
        else:
            print(0,count,minus,plus)
