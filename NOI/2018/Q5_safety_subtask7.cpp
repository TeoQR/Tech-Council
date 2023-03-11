#include <bits/stdc++.h>
#define int long long

using namespace std;

signed main()
{
//  input
    int n, h; cin >> n >> h;
    int m = 0;
    int heights[n];
    deque<pair<int, int>> dq;
    for (int i = 0; i < n; ++i){
        cin >> heights[i];
        m = max(m, heights[i]); // figuring out max height
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
//              using a sliding range minimum query
                dq = deque<pair<int, int>>();
                for (int j = 0; j <= h; ++j){
                    while(!dq.empty() && dp[i-1][j] <= dq.back().first){dq.pop_back();} //maintaining a strictly increasing deque
                    dq.push_back(make_pair(dp[i-1][j], j));
                }
                for (int j = 0; j <= m; ++j){ 
                    pair<int, int> temp = dq.front();  //temp represents min(dp(i-1, j-h to j+h))
                    dp[i][j] = temp.first + abs(heights[i]-j); // calculation of dp[i][j]
                    if(j != m){
                        if(j < m-h){ // if new items can still be added to deque
                            while(!dq.empty() && dp[i-1][j+1+h] <= dq.back().first){dq.pop_back();} //maintaining a strictly increasing deque
                            dq.push_back(make_pair(dp[i-1][j+1+h], j+1+h));
                        }
                        while(j+1-h>dq.front().second){dq.pop_front();} //removing expired items
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


/*
n*(m+1) states
dp(i, j) is the minimum number of blocks added/removed to set column i to height j while still ensuring that the artwork is safe from column 0 to i
dp(2, 3)
dp(2, 3) = min(dp(1, 3-h to 3+h)) + abs(heights[i] - j)
dp(i, j) = min(dp(i-1, j-h to j+h)) + abs(heights[i] - j)
dp(0,j) = abs(heights[i] - j)
the time complexity of finding the minimum number of a set of numbers of length N is O(N)
O(1)
sliding range minimum query
dp(2, 0)
dp(2, 1)
{5,4,6},5,8,10,9
5,{4,6,5},8,10,9
5,4,{6,7,5},10,9

deque<pair<int, int>> dq = {[4,1], [5,3]}
0 <= j <= m

m is the maximum height out of all the columns
if h >= m the artwork is guaranteed to be safe

deque:
-the front item is the minimum number within the range we are looking artwork
-the deque is strictly increasing
*/
