import sys
sys.setrecursionlimit(1_000_000)

def dfs(u, adj, vs):
    vs[u] = True
    for v in adj[u]:
        if not vs[v]:
            dfs(v, adj, vs)

def main():
    data = sys.stdin.read().strip().split()
    it = iter(data)
    n = int(next(it))
    m = int(next(it))

    adj = [[] for _ in range(n+5)]
    for _ in range(m):
        x = int(next(it))
        y = int(next(it))
        adj[x].append(y)
        adj[y].append(x)

    vs = [False] * (n+5)
    if n >= 1:
        dfs(1, adj, vs)

    for i in range(1, n+1):
        if not vs[i]:
            print(i)

    if all(vs[1:]):
        print(0)

if __name__ == '__main__':
    main()
