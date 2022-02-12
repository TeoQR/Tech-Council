#include <bits/stdc++.h>
using namespace std;

int main(){
  long long x = 100;
  double y = 1.5;
  int z = (int)x; // to convert from numerical data types (double, long long, etc.)to int, use (int)
  //for numbers that are not integers, converting them into int will round them down
  z = (int)y; //z becomes 1
  z = (int)(1 == 2); //converts boolean to int, false becomes 0, true becomes 1, for this case, z becomes 0 (for boolean to int, there is no need for conversion since 1 and 0 will be automatically converted to boolean)
  string s = "1234";
  z = stoi(s); //to convert string to int, use stoi(), this doesn't work on characters, z becomes 1234
  z = stoi(s[0]); //returns an error
  char c = '2';
  z = c - '0'; //to convert char to int, subtract the char by '0'. (The reason for this is because when subtraction happens, the chars get automatically converted into their ASCII codes), z becomes 2
  c = '0' + z; //similarly, use '0' + to convert from char to int, c becomes '2'
  z = 52;
  s = to_string(z); // to convert int to string, use the to_string() function
  
}
