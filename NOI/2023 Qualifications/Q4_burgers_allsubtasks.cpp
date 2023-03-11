#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
// input
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
    bool done, impossible;
    int lo1 = 0, hi1 = 1e9+1, mid1 = (lo1+hi1)/2; // mid1 is the guess for the total number of burgers made
    while (lo1 < mid1){
        int lo2 = 0, hi2 = mid1 + 1, mid2 = (lo2 + hi2)/2; // mid2 is the guess for the number of burgers using the first recipe
        while (lo2 < hi2){
            int temp = mid1-mid2; // the number of burgers using the second recipe
            done = false, impossible = false;
            for (int i = 0; i < n; ++i){
                if(a[i] * mid2 + b[i] * temp > x[i]){
                    if(a[i]>b[i])hi2 = mid2;
                    else if (a[i] == b[i])impossible = true;
                    else lo2 = mid2+1;
                    break;
                }
                else if (i == n-1)done = true;
            }
            if(impossible||done)break;
            mid2 = (lo2+hi2)/2;
        }
        if(done)lo1 = mid1;
        else hi1 = mid1;
        mid1 = (lo1 + hi1)/2;
    }
    cout << mid1;
    return 0;
}
