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

int n, m;
vector<int> adj[100005];
bool vs[100005];
vector<int> sizes;

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

void inp()
{
	cin >> n >> m;
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
	inp();
	
	for(int i=1; i<=n; i++)
	{
		if(!vs[i])
		{
			int sz = dfs(i);
			sizes.pb(sz);
		}
	}
	sort(sizes.begin(), sizes.end());
	if(sizes.size() > 1) cout << sizes[sizes.size()-1] + sizes[sizes.size()-2];
	else cout << sizes[0];
	return 0;
}
