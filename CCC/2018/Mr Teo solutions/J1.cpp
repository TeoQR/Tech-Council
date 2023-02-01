#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v1 = {};
    int num;
    //pushing all the numbers into a vector
    //alternatively, just use 4 integers
    for (int i = 0; i < 4; i++) {
        cin >> num;
        v1.push_back(num);
    }
    //checking if the numbers fulfill the criteria for telemarketer
    if ((v1[1] == v1[2]) and (v1[0] == 8 or v1[0] == 9) and (v1[3] == 8 or v1[3] == 9)) {
        cout << "ignore";
    }
    else {
        cout << "answer";
    }
}
