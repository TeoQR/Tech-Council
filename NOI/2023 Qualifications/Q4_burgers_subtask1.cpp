#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    int n; cin >> n;
    int a[n], b[n], x[n];
    for (int i = 0; i < n; ++i){
        cin >> x[i];
    }
    for (int i = 0; i < n; ++i){
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i){
        cin >> b[i];
    }
    int ans = 1e9+1;
    for (int i = 0; i < n; ++i){
        ans = min(ans, x[i]/a[i]);
    }
    cout << ans;
}
