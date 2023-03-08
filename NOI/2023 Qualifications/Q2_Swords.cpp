#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    cin.tie(0);
    int n; cin >> n;
    pair<int, int> arr[n];
    for (int i = 0; i < n; ++i){
        cin >> arr[i].first >> arr[i].second;
    }
    sort(arr, arr + n);
    int ans = 0;
    stack<int> s;
    for (int i = 0; i < n; ++i){
        while (arr[i].first == arr[i+1].first){
            i++;
        }
        if(s.empty() || s.top() > arr[i].second)s.push(arr[i].second);
        else{
            while(!s.empty() && s.top() <= arr[i].second){s.pop();}
            s.push(arr[i].second);
        }
    }
    cout << s.size();
}
