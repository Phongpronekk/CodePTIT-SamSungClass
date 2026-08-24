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

void solve()
{
	int n; cin >> n;
	int a[n];
	map<int, int> m;
	for(int i=0; i<n; i++)
	{
		cin >> a[i];
		m[a[i]]++;
	}
	
	for(int i=0; i<n; i++)
	{
		if(m[a[i]] % 2)
		{
			cout << a[i];
			return;
		}
	}
}

signed main()
{
	faster();
	t()
	{
		solve();
		cout << endl;
	}
	return 0;
}
