import sys

def solve():
    data = sys.stdin.read().strip().split()
    if not data:
        return
    it = iter(data)
    n = int(next(it))
    a =[int(next(it)) for _ in range(n)]

    maxn = max(a)
    maxLen = 0
    curLen = 0

    for num in a:
        if num == maxn:
            curLen += 1
            maxLen = max(maxLen, curLen)
        else:
            curLen = 0

    print(maxLen)

if __name__ == '__main__':
    solve()