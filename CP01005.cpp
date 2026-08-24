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

signed main()
{
	faster();
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		map<int, int> m;
		int x;
		for(int i=0; i<n; i++)
		{
			cin >> x;
			m[x]++;
		}
		if(m[x]%2 != 0) cout << x << endl;
	}
	return 0;
}
