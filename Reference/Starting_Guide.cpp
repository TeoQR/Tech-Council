#include <bits/stdc++.h> //allows you to use many useful functions
using namespace std; //just add it, it makes your life better

int main(){ //int main(){} must exist in your C++ code, think of it as the main body of the code
  
  //when declaring a variable, write its data type before its name
  int number1; //declaring a variable called number1 which is an integer

  int number2, number3, number4; //it is possible to declaring multiple variables at once as long as they're the same data type

  int number5 = 100; //you can also initiate a value for the variables
  
  //other than int, there are many other data types, please refer to the data type section in "Starting_Guide(Syntax).md"
  
  int number6 = 100 + 20 / 10; //mathematical operators work as per normal in C++ and the order of operation also follows PEMDAS, in this case number 6 will become 102 instead of 120
  
  int a, b;
  
  string s; // declare a variable called s which is a string
  
  cin >> a >> b; //asks the user to input to integers, separated by spaces which is then stored in a and b respectively
  
  cout << a << ' ' << b; //outputs a and b separated by a single space
  
  getline(cin, s); //gets one line of input and stores it in s as a string
  
  
  if (number6 < 200)cout << "Yes"; //if you only have one statement inside the if(), you do not need the curly brackets {}
  
  for (int i = 0; i < 10; ++i){
     cout << i << ' '; //output would be 0 1 2 3 4 5 6 7 8 9
  }
  
  int i = 0;
  for (;i < 10;){
    cout << i << ' '; //same thing as before but as you can see statement1 and statement3 can be removed from the bracket in the for loop
    i++;
  }
  
  i = 0;
  while (i < 10){
      cout << i << ' '; //you can see how while loop serves nearly the same function as for loop and thus can be used interchangeably
    i++;
  }
  
  for (int i = 0; i < 3; ++i){
    for (int j = 0; j < 5; ++j){
      if (j == 3)break;
      cout << j << ' ';
    }
    cout << '\n'; //\n is the newline character, the same as pressing enter on a keyboard, you can look more about special characters in the String files
  }
  /* outputs  0 1 2
              0 1 2
              0 1 2
     as you can see, the break only breaks out of the innermost loop (the one with j), the same goes for continue*/
}
