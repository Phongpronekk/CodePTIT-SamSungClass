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

int isPrime(int n)
{
	if(n<2) return 0;
	for(int i=2; i*i<=n; i++)
	{
		if(n%i == 0) return 0;
	}
	return 1;
}

int reverse(int n)
{
	int original = n, rev = 0;
	while(n)
	{
		rev = rev*10 + n%10;
		n /= 10;
	}
	if(original == rev) return 1;
	return 0;
}

signed main()
{
	faster();
	int t; cin >> t;
	while(t--)
	{
		int a, b; cin >> a >> b;
		if(a>b) swap(a, b);
		vector<int> v;
		for(int i=a; i<=b; i++)
		{
			if(isPrime(i) && reverse(i)) v.pb(i);
		}
		for(int i=0; i<v.size(); i++)
		{
			if(i>0 && i%10 == 0) cout << endl;
			cout << v[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
