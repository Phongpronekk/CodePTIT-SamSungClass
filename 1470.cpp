#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
//#define int long long
#define endl "\n"
#define pb push_back
#define bp pop_back
#define maxn 1000005
#define mp make_pair
#define fi first
#define se second

using namespace std;

signed main()
{
	faster();
	int t; cin >> t;
	while(t--)
	{
		int n, m; cin >> n >> m;
		int a[501][501] = {0};
		for(int i=1; i<=n; i++)
		{
			for(int j=1; j<=m; j++) cin >> a[i][j];
		}
		
		int ans = 0;
		int f[501][501] = {0};
		for(int i=1; i<=n; i++)
		{
			for(int j=1; j<=m; j++)
			{
				if(a[i][j] == 0) f[i][j] = 0;
				else f[i][j] = min({f[i-1][j], f[i][j-1], f[i-1][j-1]}) + 1;
				ans = max(ans, f[i][j]);
			}
		}
		cout << ans << endl;
	}
	return 0;
}
