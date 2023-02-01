#include <bits/stdc++.h>
using namespace std;

//helper function to rotate_right
vector<vector<int>> rotate_right(vector<vector<int>> v1) {
    //creating a 2D vector with all elements intialized to 0
    //the size of the 2D vector depends on the size of v1
    vector<vector<int>> v2(v1.size(),vector<int>(v1.size(), 0));

    for (int i = 0; i < v1.size(); i++) {
        for (int j = 0; j < v1.size(); j++) {
            v2[j][v1.size()-1-i] = v1[i][j];
            //this is how to rotate right
            //basically flipping every row in v1 into a column in v2,
            //at the appropriate index
            //you should write this out on a piece of paper to visualize
        }
    }
    return v2;
}

//helper function for rotate left
//technically you only need rotate right or rotate left
vector<vector<int>> rotate_left(vector<vector<int>> v1) {
    vector<vector<int>> v2(v1.size(),vector<int>(v1.size(), 0));

    for (int i = 0; i < v1.size(); i++) {
        for (int j = 0; j < v1.size(); j++) {
            v2[v1.size()-1-j][i] = v1[i][j];
            //similar to rotate right, basically flipping a row into a column, at 
            //the appropriate index
        }
    }
    return v2;
}

//helper function to check if the 2D vector is correct
//correct means every row is in ascending order
//every column is also in ascending order
int checker(vector<vector<int>> v1) {
    int cond1 = 1; //cond1 will remain as 1 if every row is in ascending order
    //cond1 will become 0 if any number is found to be out of order

    //iteratin throught every row 1 by 1
    //determine ascending order by checking if v1[i][j] < v1[i][j-1]
    //if this is true, means not ascending order, set cond1 = 0 and break out of loop
    for (int i = 0; i < v1.size(); i++) {
        for (int j = 1; j < v1.size(); j++) {
            if (v1[i][j] < v1[i][j-1]) {
                cond1 = 0;
                break;
            }
        }
        //code to speed things up by allowing for early termination when cond1 = 0
        if (cond1 == 0) {
            break;
        }
    }
    
    //same as above, but checking column by column to check for ascending order
    int cond2 = 1;
    for (int i = 0; i < v1.size(); i++) {
        for (int j = 1; j < v1.size(); j++) {
            if (v1[j][i] < v1[j-1][i]) {
                cond2 = 0;
                break;
            }
        }
        if (cond2 == 0) {
            break;
        }
    }
    return cond1 and cond2;
}

int main() {
    int n;
    int num;
    cin >> n;
    //2D vector of size n, all elements initialized to 0
    vector<vector<int>> v1(n,vector<int>(n, 0));
    //receiving all the inputs and putting into the 2D vector
    for (int i = 0; i< n; i++) {
        for (int j = 0 ;j < n; j++) {
            cin >> num;
            v1[i][j] = num;
        }
    }
    //ans is a 2D vector which will contain the correct answer when it is found
    vector<vector<int>> ans;
    int correct = 0; //correct becomes 1 if the vector is correct
    for (int i = 0; i < 4; i++) {
        if (checker(v1)) { //if v1 is correct, set ans = v1, set correct = 1 and break out of loop
            ans = v1;
            correct = 1;
            break;
        }
        else {
            v1 = rotate_right(v1); //if wrong rotate_right and check again
        }
    }
    //if correct =1 , meaning answer is found, output the answer
    if (correct == 1) {
        for (int i = 0; i < ans.size() ; i++) {
            for (int j = 0; j < ans.size(); j++) {
                cout << ans[i][j] << " ";
            }
            cout << "\n";
        }
        return 0;
    
    }
    //similar to above but check by rotating left instead.
    for (int i = 0; i < 4; i++) {
        if (checker(v1)) {
            ans = v1;
            correct = 1;
            break;
        }
        else {
            v1 = rotate_left(v1);
        }
    }
    if (correct == 1) {
        for (int i = 0; i < ans.size() ; i++) {
            for (int j = 0; j < ans.size(); j++) {
                cout << ans[i][j] << " ";
            }
            cout << "\n";
        }
        return 0;
    
    }
}