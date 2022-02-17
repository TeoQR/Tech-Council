#include <bits/stdc++.h>
using namespace std;
int main(){
	int g= 0, a, b, n;
  cin >> n;
	for (int i = 0; i < n; ++i){
		cin >> a >> b;
		if (5*a - 3*b >40)g++;
	}
	cout << g;
	if (g==n)cout << '+';
}
