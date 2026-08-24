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
	t()
	{
		string s; cin >> s;
		map<char, int> m;
		
		for(int i=0; i<s.size();)
		{
			char c = s[i];
			int cnt = 0;
			while(i < s.size() && s[i] == c)
			{
				cnt++;
				i++;
			}
			cout << cnt << c;
		}
		cout << endl;
	}
	return 0;
}
