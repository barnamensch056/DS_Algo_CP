def prevelementSum(list1):
    for i in range(1,len(list1)):
        list1[i]+=list1[i-1]
    return list1
def equalStacks(h1, h2, h3):
    h4=h1[::-1]
    h5=h2[::-1]
    h6=h3[::-1]
    h7=prevelementSum(h4)
    h8=prevelementSum(h5)
    h9=prevelementSum(h6)
    d=min(h7,h8,h9)
    return d
if __name__ == '__main__':
    first_multiple_input = input().rstrip().split()

    n1 = int(first_multiple_input[0])

    n2 = int(first_multiple_input[1])

    n3 = int(first_multiple_input[2])

    h1 = list(map(int, input().rstrip().split()))

    h2 = list(map(int, input().rstrip().split()))

    h3 = list(map(int, input().rstrip().split()))

    result = equalStacks(h1, h2, h3)
    print(result)
