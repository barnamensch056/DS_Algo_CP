class MyCircularQueue:

    def __init__(self, k: int):
        """
        Initialize your data structure here. Set the size of the queue to be k.
        """
        self.size=k
        self.head=self.tail=-1
        self.queue=list()

    def enQueue(self, value: int) -> bool:
        """
        Insert an element into the circular queue. Return true if the operation is successful.
        """
        if(isFull()):
            return ("Queue is Full")
        elif self.head==-1 & self.tail==-1:
            self.head=self.tail=0
        else:
            self.tail=self.tail+1%self.size
        self.queue[self.tail]=value
    def deQueue(self) -> bool:
        """
        Delete an element from the circular queue. Return true if the operation is successful.
        """
        if (isEmpty()):
            return ("Queue is empty")
        elif self.head==0 & self.tail==0:
            self.head=self.tail=-1
        else:
            temp=self.queue[self.tail]
            self.head=self.head+1%self.size
        return temp
    def Front(self) -> int:
        """
        Get the front item from the queue.
        """
        return self.queue[self.head]
        

    def Rear(self) -> int:
        """
        Get the last item from the queue.
        """
        return self.queue[self.tail]
        

    def isEmpty(self) -> bool:
        """
        Checks whether the circular queue is empty or not.
        """
        return self.head==-1 and self.tail==-1
        

    def isFull(self) -> bool:
        """
        Checks whether the circular queue is full or not.
        """
        return self.tail==elf.size-1
    
q=MyCircularQueue()
print(q.isEmpty())
print(q.isFull())
print(q.enQueue(4))
print(q.enQueue(6))
print(q.enQueue(3))
print(q.deQueue())
    