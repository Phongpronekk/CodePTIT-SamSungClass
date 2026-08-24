def dfs(u):
    print(u, end = ' ')
    vs[u] = True
    for v in adj[u]:
        if not vs[v]:
            dfs(v)

def inp():
    for i in range(1, n+1):
        adj[i].clear()

    for i in range(m):
        x, y = map(int, input().split())
        adj[x].append(y)
        adj[y].append(x)


if __name__ == '__main__':
    for t in range(int(input())):
        n, m, s = map(int, input().split())
        inp()
        dfs(s, vs, adj)

