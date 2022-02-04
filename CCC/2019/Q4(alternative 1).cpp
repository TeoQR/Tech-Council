#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
    
    string s; cin >> s; int N = s.size();
    vector<vector<int>> grid = {{1,2},{3,4}};
    int H = 0, V = 0;
    
    for (int i = 0; i < N; i++) {
        if (s[i] == 'H') {
            H++;
        } else {
            V++;
        }
        
        if (H > 1) {H = 0;}
        if (V > 1) {V = 0;}
    }
    
    int temp;
    
    if (V == 1) {
        temp = grid[0][0];
        grid[0][0] = grid[0][1];
        grid[0][1] = temp;
        
        temp = grid[1][0];
        grid[1][0] = grid[1][1];
        grid[1][1] = temp;
    }
    
    if (H == 1) {
        temp = grid[0][0];
        grid[0][0] = grid[1][0];
        grid[1][0] = temp;
        
        temp = grid[0][1];
        grid[0][1] = grid[1][1];
        grid[1][1] = temp;
    }
    
    for (auto i: grid) {
        cout << i[0] << ' ' << i[1] << '\n';
    }    
}
