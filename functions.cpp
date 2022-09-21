//
// Created by Haibin Cao on 9/19/22.
//

#include "functions.h"

bool checkPalindrome(std::string string1)
{
    int stringLength = string1.length(); // get the length of the string
    int counter = 0; // creates a counter to increment without a for loop
    char* begin = &string1[0]; // creates a char pointer that points to the memory address of the first character of the string
    char* end = &string1[stringLength-1]; // creates a char pointer that points to the memory address of the last character of the string
    while (*(begin+counter) == *(end-counter) && begin != end) // checks that the first value and last value of the string are the same but are not the same letter
    {
      if(counter < stringLength/2)
      {
          counter++;
      }
      else if(counter >= stringLength/2)
      {
          return true;
      }
    }
    return false;
}

