from collections import deque

def interleave(q):
    n = len(q)
    half = n // 2

    first_half = deque()

    for _ in range(half):
        first_half.append(q.popleft())

    while first_half:
        q.append(first_half.popleft())
        q.append(q.popleft())

# Example
q = deque([1,2,3,4])
interleave(q)
print(q)
