#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s1, s2;
    //receiving all the inputs
    cin >> n;
    cin >> s1;
    cin >> s2;
    int count = 0;
    //comparing which letter in the two strings are the same
    //if its the same, it means they are occupied on both days
    //add 1 to the count
    for (int i = 0; i < n; i++) {
        if (s1[i] == s2[i]) {
            count++;
        }
    }
    cout << count;
}