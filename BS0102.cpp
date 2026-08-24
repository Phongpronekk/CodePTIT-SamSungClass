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
int f[10005];
int a[10005];

bool fibo(int res)
{
	f[0] = 0, f[1] = 1;
	for(int i=2; i<100; i++)
	{
		f[i] = f[i-1] + f[i-2];
		if(res == f[i]) return true;
	}
	
	return false;
}

void solve()
{
	int res = 0;
	for(int i=1; i<=k; i++) res += a[i];
	
	if(fibo(res))
	{
		for(int i=1; i<=k; i++) cout << a[i] << " ";
		cout << endl;
	}
}

void Try(int i)
{
	for(int j=a[i-1]+1; j<=n-k+i; j++)
	{
		a[i] = j;
		if(i == k) solve();
		else Try(i+1);
	}
}

signed main()
{
	faster();
//	sieve();
	cin >> n >> k;
	a[0] = 0;
	
	Try(1);
	return 0;
}
