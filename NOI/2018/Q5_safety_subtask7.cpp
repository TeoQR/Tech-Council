#include <bits/stdc++.h>
#define int long long

using namespace std;

signed main()
{
    int n, h; cin >> n >> h;
    int m = 0;
    int heights[n];
    deque<pair<int, int>> dq;
    for (int i = 0; i < n; ++i){
        cin >> heights[i];
        m = max(m, heights[i]);
    }
    if(h >= m)cout << 0;
    else{
        int dp[n][m+1] = {0};
        for (int i = 0; i < n; ++i){
            if(i == 0){
                for(int j = 0; j <= m; ++j){
                    dp[i][j] = abs(heights[i]-j);
                }
            }
            else{
                dq = deque<pair<int, int>>();
                for (int j = 0; j <= h; ++j){
                    while(!dq.empty() && dp[i-1][j] <= dq.back().first){dq.pop_back();}
                    dq.push_back(make_pair(dp[i-1][j], j));
                }
                for (int j = 0; j <= m; ++j){
                    pair<int, int> temp = dq.front();
//                    cout << i << ' ' << j << ' ' << temp.first << ' ' << temp.second << '\n';
                    dp[i][j] = temp.first + abs(heights[i]-j);
                    if(j != m){
                        if(j < m-h){
                            while(!dq.empty() && dp[i-1][j+1+h] <= dq.back().first){dq.pop_back();}
                            dq.push_back(make_pair(dp[i-1][j+1+h], j+1+h));
                        }
                        while(j+1-h>dq.front().second){dq.pop_front();}
                    }
                }
            }
        }
/* 
        for (int i = 0; i < n; ++i){
            for (int j = 0; j <= m; ++j){
                cout << dp[i][j] << ' ';
            }
            cout << '\n';
        }
*/
        int ans = 1e18+1;
        for (int i = 0; i <= m; ++i){
            ans = min(ans, dp[n-1][i]);
        }
        cout << ans;
        
    }
    return 0;
}
