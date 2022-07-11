#include <bits/stdc++.h>
using namespace std;
int main(){
  	//Arrays
	int lis[5]; //declare an array of integers with a maximum size of 5
  	lis[1] = 2; //change the 2nd element to 2 (indexing in c++ starts from 0, so index 1 points to the second element)
  	lis[4] = 3; //change the 5th element to 3
  	for (int i = 0; i < 5; i++){
		cout << lis[i] << ' '; //printing out the elements of the array separated by spaces
	}
  	cout << '\n'; //if you try to print out the elements of the list, the only numbers that makes sense are the second and fifth since you haven't declared the other numbers, so C++ will just print out some random numbers for the first, third, and fourth
  	lis[5] = 5 //does not lead to error, but this does not make any changes to the list, since index 5 points to the sixth element, but there are only 5 elements in the list
  
  	//vectors
  	vector<int> vec1(5); //declare a vector named vec1 with initial size 5
	vector<int> vec2(6, 0); //declare a vector named vec2 with intial size 6 and default value 0
	vec2[3] = 4; //change the 4th element to 4
	for (int i = 0; i < vec2.size(); i++){ //vec2.size() returns the number of elements inside the vector currently, in this case it's 6
		cout << vec2[i] << ' '; //prints out the elements of the vector separatd by spaces
	}
	cout << '\n'; //the output is 0 0 0 4 0 0, since the default value has been changed to 0
	vec2.push_back(10); //adds 10 to the end of the vector
	for (int i = 0; i < vec2.size(); i++){ //vec2.size() returns 7 now
		cout << vec2[i] << ' ';
	}
	cout << '\n'; //the output is 0 0 0 4 0 0 10
	int index = 2;
	vec2.insert(vec2.begin() + index, 7); //vec2.insert inserts an element into the specified index
	//vec2.begin() is an iterator which points to the beginning of the vector. I suggest looking up what an iterator is, it's ok to not understand what it is exactly
	//If you still want to know, basically in C++, some of the data structures are not stored in order inside the heap, so an iterator helps you iterate through the data structure since the iterator knows where to go next inside the heap, but you don't
	for (auto element: vec2){
		
	}
}
