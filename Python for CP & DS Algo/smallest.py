class Employee:
    def __init__(self,a,b,c):
        self.a=a
        self.b=b
        self.c = c
    def smallest(self):
        result=0
        if self.a>self.b and self.c>b:
            self.result=self.b
        elif self.b>self.c and self.a>self.c:
            self.result=self.c
        else:
            self.result=self.a
        return self.result
pq = Employee(4,8,3)
print(pq.smallest())
