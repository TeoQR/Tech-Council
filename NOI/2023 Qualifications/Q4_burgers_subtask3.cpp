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
    int ans = 0;
    bool done;
    for (int i = 0; i <= 1500; ++i){
        int temp = 1e9+1;
        done = false;
        for (int j = 0; j < n; ++j){
            if(a[j]*i >x[j]){
                done = true;
                break;
            }
            temp = min(temp, (x[j]-i*a[j])/b[j]+i);
        }
        if(done)break;
        ans = max(ans, temp);
    }
    cout << ans;
}
