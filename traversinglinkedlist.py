#Traversing linked list
class Node:
    def init(self,dataval=None):
        self.dataval=dataval
        self.nextval=None

class SLinkedList:
    def init(self):
        self.headval=None
    def listprint(self):
        printval=self.headval
        while printval is not None:
            print(printval.dataval)
            printval=printval.nextval


llist=SlinkedList()
llist.headval=Node("Mon")
e2=Node("Tue")
e3=Node("Wed")
llist.headval.nextval=e2
e2.nextval=e3
llist.listprint()
