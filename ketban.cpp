#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define int long long
#define endl "\n"
#define pb push_back
#define bp pop_back
#define maxn 1000005
#define mp make_pair
#define fi first
#define se second
#define t() int t; cin >> t; while(t--)

using namespace std;

int n, m;
vector<int> adj[10005];
bool vs[10005];

int dfs(int u)
{
	vs[u] = true;
	int cnt = 1;
	for(int v : adj[u])
	{
		if(!vs[v]) cnt += dfs(v);
	}
	return cnt;
}

void bfs(int u)
{
	queue<int> q;
	q.push(u);
	vs[u] = true;
	while(!q.empty())
	{
		int v = q.front();
		q.pop();
		cout << v << endl;
		for(int x : adj[v])
		{
			if(!vs[x])
			{
				q.push(x);
				vs[x] = true;
			}
		}
	}
}

void inp()
{
	cin >> n >> m;
	for(int i=1; i<=n; i++) adj[i].clear();
	for(int i=0; i<m; i++)
	{
		int x, y; cin >> x >> y;
		adj[x].pb(y);
		adj[y].pb(x);
	}
	
	memset(vs, false, sizeof(vs));
}

signed main()
{
	faster();
	t()
	{
		inp();
		int maxx = 0;
		for(int i=1; i<=n; i++)
		{
			if(!vs[i])
			{
				int tmp = dfs(i);
				maxx = max(maxx, tmp);
			}
		}
		
		cout << maxx << endl;
	}
	return 0;
}
