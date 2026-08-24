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
	t()
	{
		int N, M;
	    cin >> N >> M;
	    vector<vector<int>> a(N, vector<int>(M));
	    for(int i=0; i<N; ++i)
	        for(int j=0; j<M; ++j)
	            cin >> a[i][j];
	    
	    vector<vector<int>> dp(N, vector<int>(M, 0));
	    int res = 0;
	    for(int i=0; i<N; ++i) {
	        for(int j=0; j<M; ++j) {
	            if(a[i][j]==1) {
	                if(i==0 || j==0)
	                    dp[i][j] = 1;
	                else
	                    dp[i][j] = min({dp[i-1][j], dp[i][j-1], dp[i-1][j-1]}) + 1;
	                res = max(res, dp[i][j]);
	            }
	        }
	    }
	    cout << res << endl;
	}
}

