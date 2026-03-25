from collections import deque

def firstNonRepeating(stream):
    freq = [0]*26
    q = deque()
    result = ""

    for ch in stream:
        q.append(ch)
        freq[ord(ch)-ord('a')] += 1

        while q and freq[ord(q[0])-ord('a')] > 1:
            q.popleft()

        if q:
            result += q[0]
        else:
            result += "#"

    return result

print(firstNonRepeating("aabc"))
