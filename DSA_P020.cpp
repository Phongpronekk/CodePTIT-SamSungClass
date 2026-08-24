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

int n, k;
int a[11][11], d[11][11];
const int mod = 1e9+7;

void Mul(int a[11][11], int b[11][11])
{
	int c[11][11] = {0};
	
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=n; j++)
		{
			for(int k=1; k<=n; k++)
			{
				c[i][j] += a[i][k] * b[k][j];
				c[i][j] %= mod;
			}
		}
	}
	
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=n; j++)
		{
			a[i][j] = c[i][j];
		}
	}
}

void Pow(int a[11][11], int k)
{
	if(k == 1) return;
	Pow(a, k/2);
	Mul(a, a);
	if(k & 1) Mul(a, d);
}

signed main()
{
	faster();
	t()
	{
		cin >> n >> k;
		for(int i=1; i<=n; i++)
		{
			for(int j=1; j<=n; j++)
			{
				cin >> a[i][j];
				d[i][j] = a[i][j];
			}
		}
		
		Pow(a, k);
		int ans = 0;
		for(int j=1; j<=n; j++)
		{
			ans += a[1][j];
			ans %= mod;
		}
		
		cout << ans << endl;
	}
	return 0;
}
