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

bool palin(string s)
{
	string tmp = s;
	reverse(tmp.begin(), tmp.end());
	return (s == tmp);
}

signed main()
{
	faster();
	string s; cin >> s;
	int q; cin >> q;
	while(q--)
	{
		int l, r; cin >> l >> r;
		string ans = "";
		for(int i=l-1; i<=r-1; i++) ans += s[i];
		if(palin(ans)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	
	return 0;
}
