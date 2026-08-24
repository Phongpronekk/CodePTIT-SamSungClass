#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
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

using namespace __gnu_pbds;
using namespace std;

template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag,
                         tree_order_statistics_node_update>;


signed main()
{
	faster();
	int q; cin >> q;
	while(q--)
	{
		string cmd;
		int val;
		cin >> cmd >> val;
		
		ordered_set<int> s;
		if(cmd == "add") s.insert(val);
		else if(cmd == "del") s.erase(s.find(val));
		else
		{
			if(s.size() % 2 == 0) cout << *s.find_by_order((s.size()/2) - 1) << endl;
			else cout << *s.find_by_order(s.size()/2) << endl;
		}
	}
	return 0;
}
