// #include<iostream>
// using namespace std;

//  Calculate the length of string.

// int calculateLength(const char *str) {
//     int length = 0;
    
//     // Calculate the length of string  
//     while(str[length] != '\0')
//     {
//         length++;
//     } 

//     return length;

// }

// int main() {
//     const char *myString = "Hello, World!";
//     cout << "Length of the string: " <<calculateLength(myString) << endl;
//     return 0;
// }


// 5: Write a function to check if a C-style string is a palindrome.

#include <iostream>
#include <cstring>
using namespace std;

bool isPalindrome(const char *str) {
  // Check for palindrome 

  int left = 0 , right = strlen(str)-1;

  while(left<right)
  {
    if(str[left] != str[right])
    {
        return false;
    }
    left++ ,right--;
  }

  return true;
  
}

int main() {
    const char *palindrome1 = "level";
    const char *palindrome2 = "hello";
   cout << "Is '" << palindrome1 << "' a palindrome? " << (isPalindrome(palindrome1) ? "Yes" : "No") <<endl;
    cout << "Is '" << palindrome2 << "' a palindrome? " << (isPalindrome(palindrome2) ? "Yes" : "No") <<endl;
    return 0;
}

