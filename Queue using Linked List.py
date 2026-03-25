class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class Queue:
    def __init__(self):
        self.front = self.rear = None

    def enqueue(self, x):
        temp = Node(x)
        if self.rear is None:
            self.front = self.rear = temp
            return
        self.rear.next = temp
        self.rear = temp

    def dequeue(self):
        if self.front is None:
            return -1
        temp = self.front
        self.front = temp.next
        if self.front is None:
            self.rear = None
        return temp.data

# Example
q = Queue()
q.enqueue(5)
q.enqueue(15)
print(q.dequeue())
