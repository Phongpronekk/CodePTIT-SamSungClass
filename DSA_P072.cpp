#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define int long long
#define float double
#define endl "\n"
#define pb push_back
#define bp pop_back
#define maxn 1000005
#define mp make_pair
#define fi first
#define se second
#define t() int tc; cin >> tc; while(tc--)

using namespace std;

int n, m, s, t;
vector<int> adj[10005];
bool vs[10005];
int parent[10005];

void bfs(int u)
{
	queue<int> q;
	q.push(u);
	vs[u] = true;
	
	while(!q.empty())
	{
		int v = q.front();
		q.pop();
		for(int x : adj[v])
		{
			if(!vs[x])
			{
				q.push(x);
				vs[x] = true;
				parent[x] = v;
			}
		}
	}
}

void path(int s, int t)
{
    memset(vs, false, sizeof(vs));
    memset(parent, 0, sizeof(parent));
    bfs(s);

    if(!vs[t]) 
    {
        cout << "-1";
    }
    else
    {
        vector<int> pth;
        while(t != s)
        {
            pth.pb(t);
            t = parent[t];
        }
        pth.pb(s);
        reverse(pth.begin(), pth.end());
        for(int x : pth) 
        {
            cout << x << " ";
        }
    }
}

signed main()
{
    faster();
    t()
    {
        cin >> n >> m >> s >> t;
	    for(int i = 1; i <= n; i++) adj[i].clear();
	    for(int i = 0; i < m; i++)
	    {
	        int x, y; cin >> x >> y;
	        adj[x].pb(y);
	        //adj[y].pb(x);
	    }
	    path(s, t);
        cout << endl;
    }
    return 0;
}


