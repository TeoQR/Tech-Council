__Please read this note together with its corresponding C++ file (Starting_Guide.cpp)__

I suggest reading the C++ tutorial in [https://www.w3schools.com/cpp/default.asp], however, if that does not suffice, you can follow along in the tutorial below

## Data types

When you create a variable in C++, you have to declare what type it is.

Here's a list of the commonly used data types: [https://www.programiz.com/cpp-programming/data-types]

## Input Output

Here's a guide for basic input output, it is recommended to just stick with cin, cout, and getline: [https://www.geeksforgeeks.org/basic-input-output-c/] (getline usage is seen in the starting_guide cpp file)
## Operators

Here's an explanation of the usage of the various operators in C++: [https://www.programiz.com/cpp-programming/operators]

Do note that some of the operators work differently for different data types. For example, + works as addition for numbers (int, float, etc.), but works differently for strings, which you can see in the String.cpp file

## If Else

[https://www.w3schools.com/cpp/cpp_conditions.asp]

Nothing much to add on except for line 17 in Starting_Guide.cpp

## Loops

While loop: [https://www.w3schools.com/cpp/cpp_while_loop.asp]
For loop: [https://www.w3schools.com/cpp/cpp_for_loop.asp]

For loops and while loops are nearly always alternatives to one another

There is also an extra functionality of for loop which is called range based for loop. See: [https://www.geeksforgeeks.org/range-based-loop-c/]

Notice that in the above link, there is an auto keyword. Auto deduces the data type of the variable for you so you don't have to declare the data types yourself. Honestly, it's up to your preference how often you want to use auto, I personally recommend only using it for range based for loop or when there is a very complicated data type. I have yet to see someone who uses auto for every single variable. Documentation: [https://docs.microsoft.com/en-us/cpp/cpp/auto-cpp?view=msvc-170] 

Break and continue: [https://www.w3schools.com/cpp/cpp_break.asp]

Break and continue only apply to the most inner loop it is in, for more details look at the example in line 37 in the cpp file

