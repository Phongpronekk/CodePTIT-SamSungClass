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

void dfs(int u)
{
	vs[u] = true;
	for(int v : adj[u])
	{
		if(!vs[v]) dfs(v);
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
}

void connect(int cnt)
{
	memset(vs, false, sizeof(vs));
	for(int i=1; i<=n; i++)
	{
		if(!vs[i])
		{
			cnt++;
			dfs(i);
		}
	}
	
	cout << cnt << endl;
}

signed main()
{
	faster();
	t()
	{
		int cnt = 0;
	    inp();
	    connect(cnt);
	}
	return 0;
}
