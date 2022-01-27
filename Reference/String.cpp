#include <bits/stdc++.h>
using namespace std;

int main(){
  char x = 'a'; //char is a data type which stores a single character, the character must be enveloped with the ' '
  cout << (int)x; //converting char to int will return the ASCII code, in this case, the output would be 97
  string s1 = "hello"; // the ""
  for (int i = 0; i < s1.size(); ++i){ //.size() returns the length of the string
    cout << s1[i];  //string is similar to an array of char, accessing the elements of the string can be done with the [] just like arrays
  }
  //the output would be hello, cout << s1 would also output hello
  string s2 = "world"
}
