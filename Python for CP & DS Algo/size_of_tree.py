class Node:

    def __init__(self,info):
        self.right=None
        self.info=info
        self.left=None
class BinaryTree:
    def __init__(self):
        self.root=None
    def create(self,val):
        if self.root==None:
            self.root=Node(val)
        else:
            current=self.root
            while True:
                if val<current.info:
                    if current.left:
                        current=current.left
                    else:
                        current.left=Node(val)
                        break
                elif val>current.info:
                    if current.right:
                        current=current.right
                    else:
                        current.right=Node(val)
                        break
                else:
                    break
def sizeofBinaryTree(root):
    if root==None:
            return 0
    else:
        return sizeofBinaryTree(root.left)+1+sizeofBinaryTree(root.right)
if __name__ == "__main__":
    tree=BinaryTree()
    t= int(input())
    arr=list(map(int,input().split()))
    for i in range(t):
        tree.create(arr[i])
    print(sizeofBinaryTree(tree.root))
