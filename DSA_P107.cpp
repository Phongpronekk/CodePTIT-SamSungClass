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
	string s; cin >> s;
	int n = s.size();
	vector<int> L(n, 1);
	
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<i; j++)
		{
			if(s[i] >= s[j]) L[i] = max(L[i], L[j] + 1);
		}
	}
	
	cout << *max_element(L.begin(), L.end());
	return 0;
}
