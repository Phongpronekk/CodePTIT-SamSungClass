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

bool customS(const pair<int, int> &a, const pair<int, int> &b)
{
	if(a.se != b.se) return a.se > b.se;
	return a.fi < b.fi;
}

int main()
{
	faster();
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		vector<int> v(n);
		for(int i=0; i<n; i++) cin >> v[i];
		unordered_map<int, int> freq;
		for(int i=0; i<n; i++) freq[v[i]]++;
		
		vector<pair<int, int>> fArr;
		for(auto &it : freq) fArr.pb({it.fi, it.se});
		
		sort(fArr.begin(), fArr.end(), customS);
		
		for(auto &it : fArr)
		{
			for(int i=0; i<it.se; i++)
			{
				cout << it.fi << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
