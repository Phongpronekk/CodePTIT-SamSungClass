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

int n; 
const int maxN = 1e6+5;
vector<int> a, b;
vector<bool> prime(maxN, true);

void sieve()
{
	prime[0] = prime[1] = false;
	for(int i=2; i*i<=maxN; i++)
	{
		if(prime[i])
		{
			for(int j=i*i; j<=maxN; j+=i) prime[j] = false;
		}
	}
}

void solve()
{
	int s = 0;
	for(int i=0; i<n; i++) s += a[i]*b[i];
	if(prime[s])
	{
		for(int i=0; i<n; i++)
		{
			if(b[i]) cout << a[i] << " ";
		}
		cout << endl;
	}
}

void Try(int i)
{
	for(int j=0; j<=1; j++)
	{
		b[i] = j;
		if(i == n-1) solve();
		else Try(i+1);
	}
}

signed main()
{
	faster();
	sieve();
	int t; cin >> t;
	while(t--)
	{
		cin >> n;
		a.resize(n);
		b.resize(n, 0);
		for(auto &x : a) cin >> x;
		sort(a.rbegin(), a.rend());
		Try(0);
	}
	return 0;
}
