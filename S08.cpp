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

using namespace std;

int n;
bool cmp(pair<int, int> a, pair<int, int> b)
{
	if(a.se == b.se) return a.fi < b.fi;
	return a.se < b.se;
}

signed main()
{
	faster();
	int t; cin >> t;
	while(t--)
	{
		cin >> n;
		vector<pair<int, int>> v(n);
		for(int i=0; i<n; i++) cin >> v[i].fi >> v[i].se;
		sort(v.begin(), v.end(), cmp);
		
		int cnt = 1, x = v[0].se;
		for(int i=1; i<n; i++)
		{
			if(x <= v[i].fi)
			{
				cnt++;
				x = v[i].se;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}
