queue = []

def enqueue(x):
    queue.append(x)

def dequeue():
    if not queue:
        return -1
    return queue.pop(0)

def peek():
    if not queue:
        return -1
    return queue[0]

# Example
enqueue(10)
enqueue(20)
print(dequeue())  # 10
print(peek())     # 20
