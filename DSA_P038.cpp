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

signed main()
{
	faster();
	t()
	{
		string x, y; cin >> x >> y;
		int n = x.size(), m = y.size();
		int f[n+5][m+5];
		for(int i=0; i<=n; i++)
		{
			for(int j=0; j<=m; j++)
			{
				if(i == 0 || j == 0) f[i][j] = 0;
				else
				{
					if(x[i-1] == y[j-1]) f[i][j] = f[i-1][j-1] + 1;
					else f[i][j] = max(f[i-1][j], f[i][j-1]);
				}
			}
		}
		
		cout << f[n][m] << endl;
	}
	return 0;
}
