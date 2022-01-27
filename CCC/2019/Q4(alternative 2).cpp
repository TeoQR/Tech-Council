#include <bits/stdc++.h>
using namespace std;

int main() {
  string in;
  int x1=1, x2=2, x3=3, x4=4;
  cin >> in;
  for (int i=0; i<in.length(); i++){
    if (in[i]=='H'){
      swap(x1,x3);
      swap(x2,x4);
    }
    if (in[i]=='V'){
      swap(x1,x2);
      swap(x3,x4);
    }
  }
  cout << x1 << ' ' << x2 << endl;
  cout << x3 << ' ' << x4 << endl;
}
