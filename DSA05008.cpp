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

int n, s;

signed main()
{
	faster();
	int t; cin >> t;
	while(t--)
	{
		cin >> n >> s;
		vector<int> a(n);
		vector<bool> f(s+1, false);
		for(int i=0; i<n; i++) cin >> a[i];
		f[0] = true;
		for(int i=0; i<n; i++)
		{
			for(int j=s; j>=a[i]; j--)
			{
				if(f[j-a[i]] == true) f[j] = true;
			}
		}
		if(f[s]) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
