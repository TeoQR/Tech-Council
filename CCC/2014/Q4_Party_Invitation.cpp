#include <iostream>
#include <vector>
using namespace std;

int K, M;

int main() {
	cin >> K >> M;
	vector<int> v(K+1) = {0}; // intiate all K+1 values in the vector to 0
	
	for (int i = 1; i <= K; i++) {v[i] = i;} // assign K numbers to vector (i.e {0,1,2,3,...,K})
	
	for (int i = 0; i < M; i++) {		
		int r; cin >> r;
		vector<int> temp;
		temp.push_back(0); // allow 1 indexing

		for (int j = 1; j < v.size(); j++) {
			if (j % r != 0) { // check if index is a multiple of given input
				temp.push_back(v[j]); // add to temporary vector
			}
		}
		v = temp;	// re-intialise new vector to v to continue working on it
	}
	
	for (int i = 1; i < v.size(); i++) {
		cout << v[i] << endl;
	}
}
