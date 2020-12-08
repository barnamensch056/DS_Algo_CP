class Node:
 
    # A utility function to create a new node
    def __init__(self, key):
        self.data = key 
        self.left = None
        self.right = None
import queue
def levelOrder( root ):
    queue1=queue.Queue()
    arr=[]
    if not root:
        return
    queue1.put(root)
    while queue1:
        temp=queue1.get()
        arr.append(temp.data)
        if temp.left:
            queue1.put(temp.left)
        if temp.right:
            queue1.put(temp.right)
    return arr
if __name__=='__main__':
    root = Node(1)
    root.left = Node(2)
    root.right = Node(3)
    root.left.left = Node(4)
    root.left.right = Node(5)
    levelOrder(root)