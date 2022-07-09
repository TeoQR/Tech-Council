#include <bits/stdc++.h>
using namespace std;
int main(){
  //Arrays
  int lis[5]; //declare a list of integers with a maximum size of 5
  lis[1] = 2; //change the 2nd element to 2 (indexing in c++ starts from 0, so index 1 points to the second element)
  lis[4] = 3; //change the 5th element to 3
  for (int i = 0; i < 5; i++){
		cout << lis[i] << ' '; //printing out the elements of the list separated by spaces
	}
  cout << '\n'; //if you try to print out the elements of the list, the only numbers that makes sense are the second and fifth since you haven't declared the other numbers, so C++ will just print out some random numbers for the first, third, and fourth
  lis[5] = 5 //does not lead to error, but this does not make any changes to the list, since index 5 points to the sixth element, but there are only 5 elements in the list
  
  //vectors
  vector<int> vec(5); //declare a vector 
}
