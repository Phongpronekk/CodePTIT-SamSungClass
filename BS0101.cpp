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
int prime[1000005];
int a[10005];

void sieve()
{
	for(int i=0; i<=1000000; i++) prime[i] = 1;
	prime[0] = prime[1] = 0;
	for(int i=2; i<=1000; i++)
	{
		if(prime[i])
		{
			for(int j=i*i; j<=1000000; j+=i) prime[j] = 0;
		}
	}
}

void solve()
{
	int res = 0;
	for(int i=1; i<=k; i++) res += a[i];
	
	if(!prime[res]) return;
	for(int i=1; i<=k; i++) cout << a[i] << " ";
	cout << endl;
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
	sieve();
	cin >> n >> k;
	a[0] = 0;
	
	Try(1);
	return 0;
}
