
#include <bits/stdc++.h>
#define int long long

using namespace std;

signed main()
{
//  input
    int n; cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; ++i){
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i){
        cin >> b[i];
    }
//the intersection would be lo * Y < X < hi * Y
    double lo = 0, hi = 1e18+1; //lo is representing max(q) while hi is representing min(p)
    string ans = "YES";
    for (int i = 1; i < n; ++i){
        if (a[i] >= a[i-1] && b[i] >= b[i-1]){
            ans = "NO";
            break;
        }
        if (a[i] <= a[i-1] && b[i] <= b[i-1])continue;
        if (a[i] < a[i-1]){ //condition 4
            lo = max(lo, ((double)(b[i]-b[i-1]))/((double)(a[i-1]-a[i])));
        }
        else{ //condition 3
            hi = min(hi, ((double)(b[i-1]-b[i]))/((double)(a[i]-a[i-1])));
        }
        if(lo>=hi){ //the case when there is no intersection
            ans = "NO";
            break;
        }
    }
    cout << ans;
}


/*
a0 a1
b0 b1
s0 = a0 * X + b0 * Y
s1 = a1 * X + b1 * Y
s1 < s0
a0 * X + b0 * Y > a1 * X + b1 * Y
(a1-a0) * X < -(b1-b0) * Y
c * X < -d * Y
-c * X > d * Y
c = a1-a0
d = b1-b0

1. c and d >= 0 
(NO)

2. c and d <= 0 except when they are both = 0
(YES)

3. c > 0 and d < 0
(X < p * Y)
(YES)

4. c < 0 and d > 0
(X > q * Y)
(YES)

Si is strictly decreasing

X < 4 * Y, X > Y, X < 3 * Y, X > 2 * Y
condition 3: X < 4*Y, X < 3*Y
condition 4: X > Y, X > 2*Y
2*Y < X < 3*Y

Y = 4
8 < X < 12
Si+1 < Si
*/
