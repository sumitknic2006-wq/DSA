#include<iostream>
using namespace std;

//      // Calculate the time and space complexity of each program

//     // 1: 
//         int fact(int n)
//         {
            
//             if(n<=1)
//             return 1;


//             return n*fact(n-1);


//         }

// int main(){

//     int n = 5;

//     cout<<fact(5);

//     // time complexity :- o(n) , space complexity :- o(n);
// }



// 2: 

// int power(int base, int exponent) {
//    if (exponent == 0)
//        return 1;
//    return base * power(base, exponent - 1);
// }

// int main(){
//     cout<<power(5,2);

//     // Time complexity:- o(n) , space complexity :- o(n) --> kiyonki call stack memory me ek saath data store hota hai.
// }


// // 3:
// bool isPalindrome(string str, int start, int end) {
//    if (start >= end)
//        return true;
//    return (str[start] == str[end]) && isPalindrome(str, start + 1, end - 1);
// }

// int main(){
//     string stre = "madam";
//     cout<<isPalindrome(stre,0,4);

//     // time complexity :- o(n) , s.c :- o(n)
// }


// // 4.
// void reverseString(string& str, int start, int end) {
//    if (start < end) {
//        swap(str[start], str[end]);
//        reverseString(str, start + 1, end - 1);
//    }
// }

// int main(){
//     string name = "sumit";
//     reverseString(name,0,4);
//     cout<<name;
// }


// 5:
bool isEven(int n) {
   if (n == 0)
       return true;
   return !isEven(n - 1);
}

int main()
{
    cout<<isEven(4);
}

