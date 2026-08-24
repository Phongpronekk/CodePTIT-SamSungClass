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
	for(int i=2; i*i<maxN; i++)
	{
		if(prime[i])
		{
			for(int j=i*i; j<maxN; j+=i) prime[j] = false;
		}
	}
}

int diPrime(int n)
{
	while(n)
	{
		int x = n%10;
		if(!prime[x]) return 0;
		n /= 10;
	}
	return 1;
}

int sumPrime(int n)
{
	int sum = 0;
	while(n)
	{
		sum += n%10;
		n /= 10;
	}
	return prime[sum];
}

signed main()
{
	faster();
	sieve();
	int t; cin >> t;
	while(t--)
	{
		int l, r; cin >> l >> r;
		int cnt = 0;
		for(int i=l; i<=r; i++)
		{
			if(prime[i] && diPrime(i) && sumPrime(i)) cnt++;
		}
		cout << cnt << endl;
	}
	return 0;
}
