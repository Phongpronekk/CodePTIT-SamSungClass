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
		int n, k; cin >> n >> k;
		vector<int> a(n);
		for(int &x : a) cin >> x;
		
		deque<int> dq;
		vector<int> ans;
		
		for(int i=0; i<n; i++)
		{
			if(!dq.empty() && dq.front() <= i-k) dq.pop_front();
			
			while(!dq.empty() && a[dq.back()] <= a[i]) dq.pop_back();
			
			dq.pb(i);
			
			if(i >= k-1) ans.pb(a[dq.front()]);
		}
		
		for(int x : ans) cout << x << " ";
		cout << endl;
	}
	return 0;
}
