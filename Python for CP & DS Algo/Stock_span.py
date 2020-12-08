t=int(input("Enter: "))
while(t):
    t-=1
    n=int(input("Enter: "))
    li=list(map(int,input().split()))
    print(1,end=" ")
    for i in range(1,n):
        count=1
        j=i-1
        while(j>=0):
            if li[i]>=li[j]:
                count+=1
            else:
                break
            j-=1
        print(count,end=" ")
    print()