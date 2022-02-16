#include <iostream>
#include <map>
using namespace std;

// globally assign variables to use in other functions
int N;
string arr1[30];
string arr2[30];
map<string, string> m;

bool not_exist(string name1, string name2) {
	return (m.count(name1) == 0 && m.count(name2) == 0); // the function ".count(key)" is used to check
}																											 // how many of name1 and name2 are there in the map
	
bool is_bad(string name1, string name2) {
	return (m[name1] != name2 || m[name2] != name1); // check if value assigned to name1 == 
}																									 // value assigned to name 2
	
int main() {
	cin >> N;

	// standard input names into 2 arrays
	for (int i = 0; i < 2; i++) { // repeat input loop twice
		for (int j = 0; j < N; j++) {
			if (i == 0) {cin >> arr1[j];}
			else {cin >> arr2[j];}
		}
	}
	
	for (int i = 0; i < N; i++) {
		string name1 = arr1[i]; string name2 = arr2[i]; // assign each name (easier to see)
		if (name1 == name2) { // if the names are the same immediately return that it is bad
			cout << "bad";
			return 0;
		}		
		if (not_exist(name1, name2)) { // check if the names don't exist in the map
			// if they do not exist, input them inside the map
			m[name1] = name2;
			m[name2] = name1;
		} else if (is_bad(name1, name2)) { // if they do exist check whether it is suitable  
			return 0;												 // (i.e. diff partners)
		}
	}	
	cout << "good";	// output good if all of them are not bad
}
