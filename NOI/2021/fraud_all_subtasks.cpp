#include <bits/stdc++.h>
#define int long long

using namespace std;

signed main()
{
    int n; cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; ++i){
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i){
        cin >> b[i];
    }
    int d = 0;
    double lo = 0, hi = 1e18+1;
    string ans = "YES";
    for (int i = 1; i < n; ++i){
        if (a[i] >= a[i-1] && b[i] >= b[i-1]){
            ans = "NO";
            break;
        }
        if (a[i] <= a[i-1] && b[i] <= b[i-1])continue;
        if (a[i] < a[i-1]){
            lo = max(lo, ((double)(b[i]-b[i-1]))/((double)(a[i-1]-a[i])));
        }
        else{
            hi = min(hi, ((double)(b[i-1]-b[i]))/((double)(a[i]-a[i-1])));
        }
        if(lo>=hi){
            ans = "NO";
            break;
        }
    }
    cout << ans;
}
