//Matthew Michael Sherlin
//Structures of Programming Language
//Project - C++ Language (Object Oriented Programming)
//May 1, 2021

#include <iostream>
#include <string>

using std::cout; using std::cin;
using std::string;


//creating a class called stringPalindrome
class stringPalindrome{ 
public:                                 //public member variables and functions
  stringPalindrome(string s2):s1(s2){}  //constructor takes a type "string"
  void palindrome(){                    //palidrome member function
    int i;                
    int length;                         //setting variables for function
    int stop=1;
    length=s1.length();      
    
    for(i = 0; i < length; i++){        //while i is less than length of string inputted
       if(s1[i] != s1[length-i-1]){     //if the index of the string is not equal to
    			stop=0;                       //the opposite index in terms of length, then
    			break;                        //trigger the stop.
       } 
    }
    if(stop==1) printf("String is a palindrome\n");  //if stop was not triggered
    else printf("String is not a palindrome\n");     //if stop was triggered
  }

private:                                 //private member variable
  string s1;                             //string for class
};


int main(){
  //declare string, prompt user, recieve input.
  string tmp;      
  cout << "C++ Program to check if string is palindrome\nEnter string to check: ";
  cin >> tmp;
  stringPalindrome example(tmp);  //initialize new object of class stringPalindrome called "example". It is initialized using the constructor and string tmp.
  example.palindrome();           //run member function "palindrome" for new object "example".
  return 0;
}