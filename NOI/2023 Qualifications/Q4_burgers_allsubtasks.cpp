#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
//  input
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
    bool done, impossible; // flags
    int lo1 = 0, hi1 = 1e9+1, mid1 = (lo1+hi1)/2; // mid1 is the guess for the total number of burgers made
    while (lo1 < mid1){
        int lo2 = 0, hi2 = mid1 + 1, mid2 = (lo2 + hi2)/2; // mid2 is the guess for the number of burgers using the first recipe
        while (lo2 < hi2){
            int temp = mid1-mid2; // the number of burgers using the second recipe
            done = false, impossible = false;
            for (int i = 0; i < n; ++i){ // checking if the ingredients suffice
                if(a[i] * mid2 + b[i] * temp > x[i]){
                    if(a[i]>b[i])hi2 = mid2; // if first recipe uses too much we lower the upperbound
                    else if (a[i] == b[i])impossible = true; //if the recipes uses the same number of ingredients it is impossible to make mid1 burgers
                    else lo2 = mid2+1; // if first recipe uses less ingredients than second we increase the lowerbound
                    break;
                }
                // if ingredients suffice we dont do anything
                else if (i == n-1)done = true; //it is possible to make mid1 burgers
            }
            if(impossible||done)break;
            mid2 = (lo2+hi2)/2;
        }
        if(done)lo1 = mid1; //if it is possible we increase the lowerbound 
        else hi1 = mid1; //if not possible we decrease the upper bound
        mid1 = (lo1 + hi1)/2;
    }
    cout << mid1;
    return 0;
}


/*
the possible answers are from 0 to 1e9
5e8
the possible answers now are from 0 to 5e8 (if 5e8 is not possible)
the possible answers now are from 5e8 to 1e9 (if 5e8 is possible)

is it possible to make m burgers?
a and b are the number of burgers made using the first and second recipe respectively
now, we binary search a
0 to m
when a = m/2, b = m - m/2 = m/2 O(N)
*/
