#include <bits/stdc++.h>
using namespace std;

bool is_palindrome(string s, int lower, int upper) {

  while (lower != upper) {
    if (s[lower] == s[upper]) {
      if (lower + 1 == upper) {
        return true;
      }
      lower++;
      upper--;
    } else {
      return false;
    }
  }
  return true;
}

int main() {

  string s; cin >> s;
  int N = s.length();
  int lower = 0;
  int upper = N - 1;
  int guess = N - 1;

  while (upper > 0) {
    while (upper < N) {
      if (is_palindrome(s, lower, upper)) {
        cout << (upper - lower) + 1;
        return 0;
      }
      upper++;
      lower++;
    }
    guess--;
    upper = guess;
    lower = 0;
  }
  cout << 0;
} 
