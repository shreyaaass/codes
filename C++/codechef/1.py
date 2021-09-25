t=int(input())
for i in range(t):
    n,k=map(int,input().split(" "))
    s=input()
    p=list(map(int,s.split(" ")))
    l=list(map(int,s.split(" ")))
    if n>1:
        l.sort(reverse=True)
        num=l[k-2]
        #print(num)
        for i in range(len(l)):
            if l[i]==num:
                #print(1,k)
                print("l")
    else:
        print(p[0])