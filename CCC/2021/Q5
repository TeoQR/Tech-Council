#include <iostream>
#include <vector>
using namespace std;

// initially declare variables
int R, C, K;
int ans = 0;
vector<vector<bool>> v;
vector<bool> row;
vector<bool> column;

signed main () {
	
	cin >> R >> C >> K;
	
        // .resize function works for vectors
        // takes in 2 arguments (second one optional): new size and what to set the 
	v.resize(R+1, vector<bool>(C+1,false));
	row.resize(R+1,false);
	column.resize(C+1,false);

	for (int i = 1; i <= K; i++) {
		char a; int index;
		cin >> a >> index;
		
		if (a == 'R') {
			row[index] = !row[index]; // swaps between True and False
		} else {
			column[index] = !column[index];
		}
	}

	for (int i = 1; i <= R; i++) {
		if (row[i]){
			for (int j = 1; j <= C; j++) {
				v[i][j] = !v[i][j];
			}
		}
	}
	
	for (int i = 1; i <= C; i++) {
		if (column[i]) {
			for (int j = 1; j <= R; j++) {
				v[j][i] = !v[j][i];
			}
		}
	}

	for (int i = 1; i <= R; i++) {
		for (int j = 1; j <= C; j++) {
			if (v[i][j]) {
				ans++;
			}
		}
	}
	
	cout << ans;
}
