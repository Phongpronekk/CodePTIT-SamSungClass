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

const int maxN = 1e6+5;
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

signed main()
{
	faster();
	sieve();
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		int cnt = 0;
		for(int i=2; i<=n/2; i++)
		{
			if(prime[i] && prime[n-i])
			{
				cnt++;
				cout << i << " " << n-i;
				break;
			}
		}
		if(cnt == 0) cout << "-1";
		cout << endl;
	}
	return 0;
}
