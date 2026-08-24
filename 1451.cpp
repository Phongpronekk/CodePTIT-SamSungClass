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

using namespace std;

int f[1001][1001];

void solve()
{
	int n, res = 0;
	string s;
	cin >> n >> s;
	memset(f, 0, sizeof(f));
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=n; j++)
		{
			if(s[i-1] == s[j-1] && i != j) f[i][j] = f[i-1][j-1] + 1;
			else f[i][j] = max(f[i-1][j], f[i][j-1]);
			res = max(res, f[i][j]);
		}
	}
	cout << res;
}

signed main()
{
	faster();
	int t; cin >> t;
	while(t--)
	{
		solve();
		cout << endl;
	}
	return 0;
}
