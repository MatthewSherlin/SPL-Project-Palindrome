//Matthew Michael Sherlin
//Structures of Programming Language
//Project - C Language (Procedural Programming)
//May 1, 2021

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

//defining a global function for use in the program
void palindrome(char array[]){           //function that takes type character array (mock string)
  int i;
  int length;                            //setting variables for function                    
  int stop=1;
  length=strlen(array);
  
  for(i = 0; i < length; i++){           //while i is less than length of string inputted
    if(array[i] != array[length-i-1]){   //if the index of the string is not equal to
  			stop=0;                          //the opposite index in terms of length, then
  			break;                           //trigger the stop.
     } 
  }
  if(stop==1) printf("String is a palindrome\n");  //if stop was not triggered
  else printf("String is not a palindrome\n");     //if stop was triggered
}

int main(){
  //declare character array, prompt user, recieve input.
  char array[50]; 
  printf("C Program to check if string is palindrome\n");
  printf("Enter string to check: ");
  scanf("%s", array);
  //run global function for the character array inputted
  palindrome(array);
  return 0;
}