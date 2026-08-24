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

signed main()
{
	faster();
	int t; cin >> t;
	while(t--)
	{
		int n, m, p; cin >> n >> m >> p;
		string X, Y, Z; cin >> X >> Y >> Z;
		int f[n+1][m+1][p+1];
		for(int i=0; i<=n; i++)
		{
			for(int j=0; j<=m; j++)
			{
				for(int k=0; k<=p; k++)
				{
					if(i == 0 || j == 0 || k == 0) f[i][j][k] = 0;
					else
					{
						if(X[i-1] == Y[j-1] && Y[j-1] == Z[k-1]) f[i][j][k] = f[i-1][j-1][k-1] + 1;
						else f[i][j][k] = max(max(f[i-1][j][k], f[i][j-1][k]), f[i][j][k-1]);
					}
				}
			}
		}
		cout << f[n][m][p] << endl;
	}
	return 0;
}
