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
		int n; cin >> n;
		string s; cin >> s;
		
		int dp[n+5][n+5];
		memset(dp, 0, sizeof(dp));
		for(int i=1; i<=n; i++)
		{
			for(int j=1; j<=n; j++)
			{
				if(s[i-1] == s[j-1] && i != j) dp[i][j] = dp[i-1][j-1] + 1;
				else dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
			}
		}
		
		cout << dp[n][n] << endl;
//		for(int i=0; i<=n; i++)
//		{
//			for(int j=0; j<=n; j++)
//			{
//				cout << dp[i][j] << " ";
//			}
//			cout << endl;
//		}
	}
	return 0;
}
