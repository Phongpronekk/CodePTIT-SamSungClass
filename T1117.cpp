#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
//#define int long long
#define endl "\n"
#define pb push_back
#define bp pop_back
#define maxn 1000005
#define mp make_pair
#define fi first
#define se second

using namespace std;

int main()
{
	faster();
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		vector<int> v(n);
		for(int i=0; i<n; i++) cin >> v[i];
		sort(v.begin(), v.end());
		for(int i=0; i<n; i++) cout << v[i] << " ";
		cout << endl;
	}
	return 0;
}
