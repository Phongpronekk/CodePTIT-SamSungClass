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
	int s1, s2, f1, f2; cin >> s1 >> s2 >> f1 >> f2;
	int dx = abs(s1 - f1), dy = abs(s2 - f2);
	cout << max(dx, dy);
	return 0;
}
