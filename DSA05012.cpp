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

const int mod = 1e9+7;

int n, k, a[1005][1005];

void prepare()
{
	a[1][0] = 1; a[1][1] = 1;
	for(int i=2; i<=n; i++)
	{
		for(int j=0; j<=i; j++)
		{
			if(j == 0 || j == i) a[i][j] = 1;
			else a[i][j] = (a[i-1][j-1] + a[i-1][j]) % mod;
		}
	}
}

signed main()
{
	faster();
	int t; cin >> t;
	while(t--)
	{
		cin >> n >> k;
		prepare();
		cout << a[n][k] << endl;
	}
	return 0;
}
