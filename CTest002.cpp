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

int prime[1000005];

void sieve()
{
	for(int i=0; i<1000000; i++) prime[i] = 1;
	prime[0] = prime[1] = 0;
	for(int i=2; i<1000; i++)
	{
		if(prime[i])
		{
			for(int j=i*i; j<1000000; j+=i) prime[j] = 0;
		}
	}
}

signed main()
{
	faster();
	sieve();
	t()
	{
		int n; cin >> n;
		set<int> se;
		while(n--)
		{
			int x; cin >> x;
			if(prime[x]) se.insert(x);
		}
		for(auto x : se) cout << x << " ";
		cout << endl;
	}
	return 0;
}
