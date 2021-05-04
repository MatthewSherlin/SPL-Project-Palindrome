Matthew Michael Sherlin
Structures of Programming Language
Project - C Language vs C++ Language (Procedural Programming vs Object Oriented Programming)
May 1, 2021

Within this project, I have used a program, which checks if a string is palindrome or not in order to show some of the differences between the C language and C++ language.
The compilers that I have used are the both from the Clang front end compiler family, those being clang and clang++. These are both from the same software. This compiler is commonly
used in KSU and on the wasp/hornet server.

When comparing these two functions, you can see some differences. First, you can see that C++ is object driven, where C is function driven. In C, something like "classes" or structures can be used, but member functions are not able to be used, where they are in C++. In C, they are more so only used as a type that allows different data items into a single structure. In C++, classes and objects are almost everything in the language. They contain attributes and methods, and their interactions and members are more specified using access specifiers (private, protected, public).

Because of the object oriented nature of C++, the functions in the programs are implemented differently, while the main syntax of the function is the same. In C, the function is a global function that is executed with a character array. In C++, the function is a member function to the class, and it is called with the created object and it doesn't require a parameter when calling it. These are two totally different parameter passing techniques.

These languages use different types. Specifically, in these functions, a string type is used in the C++ function, where a different type of string is used in C. This different string is actually an array of characters. 

C does not support arrays with dynamic number of elements, where they are dynamically allocated in C++. That is why in the C program, the character array's size needs to be specified prior to use, where in the C++ program, it doesn't. The way that these two types can be implemented is much different as a result.

These are some of the concepts that are different when comparing C vs C++.