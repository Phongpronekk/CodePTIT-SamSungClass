import sys
import heapq
from collections import Counter

def prune(heap, delayed, is_left):
    """Bỏ các phần tử ở đỉnh heap đã bị đánh dấu xóa."""
    while heap:
        top = -heap[0] if is_left else heap[0]
        if delayed.get(top, 0) > 0:
            heapq.heappop(heap)
            delayed[top] -= 1
            if delayed[top] == 0:
                del delayed[top]
        else:
            break

def rebalance(left, right, sizes, delayed):
    # đảm bảo: len_left == len_right hoặc len_left == len_right + 1
    lenL, lenR = sizes
    if lenL > lenR + 1:
        prune(left, delayed, True)
        x = -heapq.heappop(left)
        heapq.heappush(right, x)
        sizes[0] -= 1
        sizes[1] += 1
        prune(left, delayed, True)
    elif lenL < lenR:
        prune(right, delayed, False)
        x = heapq.heappop(right)
        heapq.heappush(left, -x)
        sizes[0] += 1
        sizes[1] -= 1
        prune(right, delayed, False)

def solve():
    data = sys.stdin.read().strip().splitlines()
    q = int(data[0])
    left = []   # max-heap bằng cách đẩy số âm
    right = []  # min-heap
    delayed = Counter()  # map giá trị -> số lần bị đánh dấu xóa
    sizes = [0, 0]  # số phần tử hợp lệ (left, right)

    idx = 1
    out = []
    for _ in range(q):
        parts = data[idx].split()
        idx += 1

        if parts[0] == "add":
            x = int(parts[1])
            if not left or x <= -left[0]:
                heapq.heappush(left, -x)
                sizes[0] += 1
            else:
                heapq.heappush(right, x)
                sizes[1] += 1
            rebalance(left, right, sizes, delayed)

        elif parts[0] == "del":
            x = int(parts[1])
            # đánh dấu xóa ở heap phù hợp
            if x <= -left[0]:
                sizes[0] -= 1
                delayed[x] += 1
                prune(left, delayed, True)
            else:
                sizes[1] -= 1
                delayed[x] += 1
                prune(right, delayed, False)
            rebalance(left, right, sizes, delayed)

        else:  # "print"
            prune(left, delayed, True)
            # theo định nghĩa đề, median là a[(n+1)//2] => luôn ở đỉnh left
            out.append(str(-left[0]))

    sys.stdout.write("\n".join(out))

if __name__ == "__main__":
    solve()
