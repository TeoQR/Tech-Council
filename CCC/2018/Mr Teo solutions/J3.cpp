#include <bits/stdc++.h>
using namespace std;

int main () {
    int n1, n2, n3, n4;
    cin >> n1;
    cin >> n2;
    cin >> n3;
    cin >> n4;
    vector<vector<int>> v1(5, vector<int>(5, 0)); //creates 2D vector and intialize everything to 0
    //fill in the 1st row of the 2D vector
    //this indicates the distance of every city from the first city (city of index 0)
    v1[0][0] = 0;
    v1[0][1] = n1;
    v1[0][2] = n1 + n2;
    v1[0][3] = n1 + n2 + n3;
    v1[0][4] = n1 + n2 + n3 + n4;
    //iterate through the 2D vector starting from the 2nd row (the second city of index 1)
    //notice that the distance of city 2 to every other city can be calculated from the distance of city 1 to all other cities
    //in particular: v1[i][j] = abs(v1[0][j] - v1[0][i])
    //v1[2][3] is the distance from city index 2 to city of index 3
    //and this is equals to abs(v1[0][2] - v1[0][3]), 
    //absolute value of the distance from 0 to 2 minus 0 to 3
    for (int i = 1; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            v1[i][j] = abs(v1[0][j] - v1[0][i]);
        }
    }

    //cout the answer 1 by 1 to complete the question
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << v1[i][j] << " ";
        }
        cout << "\n";
    }

}

/*
    create m*n 2D vector with 0 as initial value
    int m = 2, n = 5;
    vector<vector<int>> vec(m, vector<int> (n, 0));
*/