#include <bits/stdc++.h>
using namespace std;

int main(){
  long long x = 100
  double y = 1.5
  int z = (int)x//any numerical data type (long long, long, double, etc.) into an int 
  //for numbers that are not integers, converting them into int will round them down
  z = (int)y; //z becomes 1
  string s = "1234";
  z = stoi(s) //to convert string to int, use stoi(), this doesn't work on characters, z becomes 1234
  z = stoi(s[0]) //returns an error
}
