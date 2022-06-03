#include <bits/stdc++.h>
using namespace std;

int main(){
  char x = 'a'; //char is a data type which stores a single character, the character must be enveloped with the ' '
  cout << (int)x; //converting char to int will return the ASCII code, in this case, the output would be 97
  string s1 = "hello"; // for strings, you need to envelop the letters with " "
  for (int i = 0; i < s1.size(); ++i){ //.size() returns the length of the string
    cout << s1[i];  //string is similar to an array of char, accessing the elements of the string can be done with the [] just like arrays (refer to arrays section)
  }
  cout << s1[s1.size() - 1]; //s.size() - 1 is the last index of string s1, this will output o 
  //the output would be hello, cout << s1 would also output hello
  string s2 = "world";
  string s3 = s1 + ' ' + s2 + '!'; //The + operator combines strings together, also remember that single characters must use the single quotes '' instead of the double quotes ""
  for (auto letter : s3){
    cout << x << ' '; //The auto will convert letter into a char, the output would be h e l l o   w  o r l d !
  }
  
}
