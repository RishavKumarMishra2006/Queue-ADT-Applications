from collections import deque

def reverseK(q, k):
    stack = []

    for _ in range(k):
        stack.append(q.popleft())

    while stack:
        q.append(stack.pop())

    for _ in range(len(q) - k):
        q.append(q.popleft())

# Example
q = deque([1,2,3,4,5])
reverseK(q, 3)
print(q)
