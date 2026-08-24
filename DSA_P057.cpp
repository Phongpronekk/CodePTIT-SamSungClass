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

string even_palin(const string &half)
{
	string rev = half;
	reverse(rev.begin(), rev.end());
	return half + rev;
}

signed main()
{
	faster();
	t()
	{
		int n; cin >> n;
		queue<string> q;
		vector<string> res;
		
		q.push("6");
		q.push("8");
		
		while((int)res.size() < n)
		{
			string half = q.front();
			q.pop();
			res.pb(even_palin(half));
			
			q.push(half + "6");
			q.push(half + "8");
		}
		
		for(auto x : res) cout << x << " ";
		cout << endl;
	}
	return 0;
}
