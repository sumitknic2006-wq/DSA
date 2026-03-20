#include<iostream>
using namespace std;
int main(){

// While Loop:- 
// Print 1 to n number
    // int n;
    // cout<<"Enter the number:";
    // cin>>n;
    // int i=1;  //initialization
    // while(i<=n){  //Break
    //     cout<<i<<" ";
    //     i++;   //Update
    // }

// Table program.
    // int n;
    // cout<<"Enter the number:";
    // cin>>n;
    // int i=1;  //initialization
    // while(i<=10){  //Break
    //     cout<<n*i<<endl;
    //     i++;   //Update
    // }

// Do_While Loop:-
// Table 1 to n;
    // int n;
    // cout<<"Enter the number:";
    // cin>>n;
    // int i = 1;
    // do{
    //     cout<<n*i<<endl;
    //     i++;
    // }while(i<=10);

// sum of 1 to n.
    // int n;
    // cout<<"Enter the number:";
    // cin>>n;
    // int i = 1;  //initialize
    // int sum = 0;
    // do{
    //     cout<<sum<<endl;
    //     sum = sum+i;    
    //     i++;  //update
    // }while(i<=n);  //break

// BREAK:-
    // int i = 1;
    // int n;
    // cout<<"enter the number:";
    // cin>>n;
    // while(i<=n){
    //     if(i == 4){
    //         break;
    //     }
    //     cout<<i<<" ";
    //     i++;
    // }

// CONTINUE:-
    // int n;
    // cout<<"enter the number:";
    // cin>>n;
    // for(int i=1;i<=n;i++){
    //     if(i == 4){
    //     continue;
    //     }
    //     cout<<i<<" ";
    // }

// SWITCH:-
    // int i;
    // cout<<"Enter the number:";
    // cin>>i;
    // switch(i)
    // {
    //     case 1:
    //     cout<<"Rohit";
    //     break;

    //     case 2:
    //     cout<<"Sumit";
    //     break;

    //     default:
    //     cout<<"Sohit";
    // }

// break hata dete to
    // int i;
    // cout<<"Enter the number:";
    // cin>>i;
    // switch(i)
    // {
    //     case 1:   // Print RohitSumit
    //     cout<<"Rohit";

    //     case 2:
    //     cout<<"Sumit";
    //     break;

    //     default:
    //     cout<<"Sohit";
    // }

// Print Week 
    // int i;
    // cout<<"Enter the number:";
    // cin>>i;
    // switch(i)
    // {
    //     case 1:   
    //     cout<<"Mon";
    //     break;

    //     case 2:
    //     cout<<"Tue";
    //     break;

    //     case 3:
    //     cout<<"Wed";
    //     break;

    //     case 4:
    //     cout<<"Thr";
    //     break;

    //     case 5:
    //     cout<<"Fri";
    //     break;

    //     case 6:
    //     cout<<"Sat";
    //     break;

    //     case 7:
    //     cout<<"Sun";
    //     break;

    //     default:
    //     cout<<"Enter the valid day";

// SCOPE OF A VARIABLE:-
    // int n = 10;
    // int i = 30;

    // if(i==30)
    // {
    //     cout<<n;
    // }

// or
    // int n = 10;
    // int i = 30;

    // if(i==30)
    // {
    //     int n = 20;
    //     cout<<n;
    // }

// for loop me scope
    // int i = 30;
    // for(int i = 10;i<=30;i++){
    //     cout<<i<<" ";
    // }
// or
    // int i = 30;
    // for( i = 10;i<=30;i++){
    //     cout<<i<<" ";
    // }

// or

    // int i = 20;
    // for(;i<=30;i++){
    //     cout<<i<<" ";
    // }

// PRACTICE QUESTION

// 1: Take a number n from the user and print all the even numbers between 1 and n(inclusive). Do this using while and do while loop separately.
    // int n;
    // cout<<"Enter of the number:";
    // cin>>n;
    // int i = 1;
    // while(i<=n){
    //     if(i%2 == 0){
    //         cout<<i<<" ";
    //     }
    //     i++; 
    // }

// 2: Find the factorial of a number n using a while loop and do a while loop.
    // int n;
    // cout<<"Enter the of number:";
    // cin>>n;
    // int fact = 1;
    // int i = 1;
    // while(n>=i){
    //     fact = fact*i;
    //     i++;
    // }
    // cout<<"fact = "<<fact<<endl;

// 3: Given a number n, print all the numbers from 1 to n(inclusive) which are not divisible by 3 and 5. (use Continue here).
    // int n;
    // cout<<"enter of the number:";
    // cin>>n;
    // int i = 1;
    // while(i<=n){
    //     if(i%3 != 0 && i%5 != 0){
    //         cout<<i<<" ";
    //     }
    //     i++;
    // }

// 4: Given a number n, print the corresponding month of it. For n=1, print Jan, n=2, print Feb…, if the user puts any invalid number, don’t do anything. (Use switch here)
    // int n;
    // cout<<"enter of the number:";
    // cin>>n;
    // switch(n)
    // {
    //     case 1:
    //     cout<<"Jan"<<endl;
    //     break;

    //     case 2:
    //     cout<<"Feb"<<endl;
    //     break;

    //     case 3:
    //     cout<<"Mar"<<endl;
    //     break;

    //     case 4:
    //     cout<<"Apr"<<endl;
    //     break;

    //     case 5:
    //     cout<<"May"<<endl;
    //     break;

    //     case 6:
    //     cout<<"Jun"<<endl;
    //     break;

    //     case 7:
    //     cout<<"Jul"<<endl;
    //     break;

    //     case 8:
    //     cout<<"Aug"<<endl;
    //     break;

    //     case 9:
    //     cout<<"Sep"<<endl;
    //     break;

    //     case 10:
    //     cout<<"oct"<<endl;
    //     break;

    //     case 11:
    //     cout<<"Nov"<<endl;
    //     break;

    //     case 12:
    //     cout<<"Dec"<<endl;
    //     break;

    //     case 13:
    //     cout<<"Invalid number";
    // }

// 5: Print all the Capital and small letters  using a while loop. It means A-Z, then a-z.
    // char n = 91;
    // char ch = 65;
    // while(ch<n){
    //     cout<<ch<<" ";
    //     ch++;
    // }

// small
    // char n = 91;
    // char ch = 65;
    // while(ch<n){
    //     char s = ch+32;
    //     cout<<s<<" ";
    //     ch++;
    // }

// 6: Give a number n, find if it is prime or not, use a while loop and break here to solve it.
//     int n;
//     cout<<"enter the number:";
//     cin>>n;

//     if(n<2){
//         cout<<"Not prime";
//         return 0;
//     }else{
//     int i = 2;
//     while(i<n){
//         if(n%2 == 0){
//             cout<<"Not prime";
//             i++;
//             return 0;
//         }
//         }
//         cout<<"prime";    
// }
    
 





    
    


    return 0;
}