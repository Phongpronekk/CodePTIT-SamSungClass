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

const int mod = 1e9 + 7;

void solve(int n, int k)
{
	vector<int> dp(n+1, 0);
	dp[0] = 1;
	int sum = dp[0];
	for(int i=1; i<=n; i++)
	{
		dp[i] = sum;
		dp[i] %= mod;
		if(i>=k) sum = (sum+dp[i]-dp[i-k]) % mod;
		else sum = (sum+dp[i]) % mod;
		if(sum < 0) sum += mod;
	}
	cout << dp[n] << endl;
}

int main()
{
	faster();
	int t; cin >> t;
	while(t--)
	{
		int n, k; cin >> n >> k;
		solve(n, k);
	}
	return 0;
}
