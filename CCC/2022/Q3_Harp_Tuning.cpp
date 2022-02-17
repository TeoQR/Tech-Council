#include <bits/stdc++.h>
using namespace std;
int main(){
	string temp = "", s, num = "";
  cin >> s;
	int cond = 0;
	char op;
	for (int i = 0; i < s.size(); ++i){
		if (cond == 0){
			if (s[i] != '+' && s[i] != '-'){
				temp += s[i];
			}
			else{
				cond = 1;
			}
		}
		if (cond == 1){
			cond = 2;
			op = s[i];
		}
		else if (cond == 2){
			if (s[i] - '0' <= 9 && s[i] - '0' >= 0){
				num += s[i];
			}
			else{
				cond = 0;
				cout << temp << ' ';
				if (op == '+') cout << "tighten" << ' ';
				else cout << "loosen" << ' ';
				cout << num << '\n';
				num = "";
				temp = "";
				i--;
			}
		}
	}
				cond = 0;
				cout << temp << ' ';
				if (op == '+') cout << "tighten" << ' ';
				else cout << "loosen" << ' ';
				cout << num << '\n';
}
