#include<bits/stdc++.h>
using namespace std;

int main() {
  int Q, N, D, P;
  int sum=0;
  vector<int> Dc;
  vector<int> Pc;
  cin >> Q >> N;
  for (int i=0; i<N; i++){
    cin >> D;
    Dc.push_back(D);
  }
  for (int i=0; i<N; i++){
    cin >> P;
    Pc.push_back(P);
  }
  
  sort (Dc.begin(), Dc.end());
  sort (Pc.begin(), Pc.end());

  if (Q==2){
    reverse (Pc.begin(), Pc.end());
  }

  for (int i=0; i<N; i++){
    sum += max(Pc[i], Dc[i]);
  }
  cout << sum;
} 
