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

signed main()
{
	faster();
	int t; cin >> t;
	int dp[105] = {0};
	dp[1] = 1; dp[2] = 2; dp[3] = 4;
	for(int i=4; i<=100; i++) dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
	while(t--)
	{
		int n; cin >> n;
		cout << dp[n] << endl;
	}
	return 0;
}
