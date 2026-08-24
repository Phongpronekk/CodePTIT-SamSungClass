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

signed main()
{
	faster();
	int n; cin >> n;
	vector<int> a(n);
	for(int &x : a) cin >> x;
	
	int maxx = *max_element(a.begin(), a.end());
	int best = 0, cur = 0;
	
	for(int i=0; i<n; i++)
	{
		if(a[i] == maxx)
		{
			cur++;
			best = max(best, cur);
		}
		else cur = 0;
	}
	
	cout << best;
	return 0;
}
