#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    string s; //the input string for each line
    cin >> N;
    int count; //to help count the number of consecutive equivalent characters
    vector<vector<pair<int, char>>> v(N); //a 2 dimensional vector which stores the encryption pairs for each line
for (int i = 0; i < N; ++i){
        cin >> s;
        count = 1; // reset count
        for (int j = 1; j < (int)s.size(); ++j){ //iterate through the inputted string starting from the second character
            if (s[j] == s[j-1]){
                count++; //count increases when there is an additional consecutive equivalent character
            }
            else{
                v[i].push_back({count, s[j-1]}); //add the encryption pair to the vector
                count = 1; //reset count
            }
        }
        v[i].push_back({count, s[s.size()-1]}); //add the last encryption pair since it is not included in the previous for loop
    }
for (int i = 0; i < N; ++i){
        for (int j = 0; j < (int)v[i].size(); ++j){
            cout << v[i][j].first << ' ' << v[i][j].second << ' ';
        }
        cout << '\n';
    }
}
