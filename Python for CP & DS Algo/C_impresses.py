def implementStack(arr):
    stack1=[]
    for index,c in enumerate(arr):
        while c:
            if index%2==0:
                stack1.append('A')
            else:
                stack1.append('B')
            c-=1
    return stack1
def binarySearch(arr,l,r,y):
    p=len(arr)
    if(r>=1):
        mid=l+r-1/2
        if mid==y:
            return arr[mid]
        elif y<mid:
            return binarySearch(arr,0,mid-1,y)
        else:
             return binarySearch(arr,mid+1,p-1,y)
    else:
        return
cases=int(input('Enter1:-'))

arr= list(map(int, input().split()))
    
queries=int(input('Enter3:-'))
while queries:
    x=int(input('Enter4:-'))
    stack2=implementStack(arr)
    result=binarySearch(stack2,0,len(stack2)-1,x)
    print(result)
    queries-=1