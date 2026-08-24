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

bool cmp(const pair<int, int> &a, const pair<int, int> &b)
{
	return a.fi < b.fi;
}

void solve()
{
	int n, x, y, z;
	cin >> n >> x >> y >> z;
	vector<pair<int, int>> lim(n);
	for(auto &p : lim) cin >> p.fi >> p.se;
	sort(lim.begin(), lim.end(), cmp);
	
	vector<int> cross;
	
	for(int i=0; i<n-1; i++)
	{
		int l = max(lim[i].fi, lim[i+1].fi);
		int r = min(lim[i].se, lim[i+1].se);
		
		if(l <= r) cross.pb(r);
	}
	
	if(cross.size() == 0)
	{
		cout << y + ((n-1) * max(x, z));
		return;
	}
	
	int res = -1e9;
	for(auto r : cross)
	{
		int ans = 0; 
		for(auto p : lim)
		{
			if(p.fi <= r && r <= p.se) ans += y;
			else if(r < p.fi) ans += x;
			else if(r > p.se) ans += z;
		}
		res = max(res, ans);
	}
	
	cout << res;
}

signed main()
{
	faster();
	solve();
	return 0;
}
