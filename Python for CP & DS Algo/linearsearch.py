if __name__=="__main__":
    t=1
    while(t>0):
        N,K=map(int,input().split())
        arr1=list(map(int,input().split()))
        for i in range(len(arr1)):
            if arr1[i]==K:
                print(i)
            else:
                print(-1)
                break
        t-=1

