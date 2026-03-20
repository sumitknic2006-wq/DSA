#include<iostream>
using namespace std;

// Sum of numbers
    // int sum(int m, int n){  // Function declare
    //     int ans = m+n;  // Function define
    //     return ans;
    // }
// Multiplication
    // int mul(int m, int n){
    //     int result = m*n;
    //     return result;
    // }
// Void
    // void fun(){  // humko koi value return nahi krana rahta hai to.
    //     cout<<"Hello Coder Army"<<endl;
    // }
    // int main(){
    //     int a,b;
    //     cout<<"Enter two number:";
    //     cin>>a>>b;
    // //Function call
    // cout<<sum(a,b);  // or // int ans = sum(a,b); -> cout<<ans;
    // cout<<endl;
    // cout<<mul(a,b)<<endl;
    // fun();
    // }

// Void Function
    // void add(int s, int t){
    //     int value = s+t;
    //     cout<<value<<endl;
    // }
    // int main(){
    //     int c,d;
    //     cout<<"Enter of the two numbwr:";
    //     cin>>c>>d;
    //     // Function call
    //     add(c,d);
    // }

// Prime Number
    // bool Prime(int n){
    //     if(n<2){
    //         return 0;
    //     }
    //     for(int i = 2;i<n;i++){
    //         if(i%2 == 0){
    //             return 0 ;
    //         }
    //     }
    //     return 1;
    // }
// Factorial
    // int fact(int n){
    //     int ans = 1;
    //     for(int i = 1;i<=n;i++){
    //         ans = ans*i;
    //     }
    //     return ans;
    // }
    // int main(){
    //     int a,b;
    //     cout<<"enter of the two number:";
    //     cin>>a>>b;
    //     // A is prime or not
    //     cout<<Prime(a)<<endl;;
    //     // A ka factorial
    //     cout<<fact(a)<<endl;
    //     // B is prime or not
    //     cout<<Prime(b)<<endl;
    //     // B ka factorial
    //     cout<<fact(b)<<endl;
    //     // B-A is prime or not
    //     cout<<Prime(b-a)<<endl;
    //     // B-A ka factorial
    //     cout<<fact(b-a)<<endl;
    // }

    // OR

// Prime Number
//     void Prime(int n){
//         if(n<2){
//             cout<<0<<endl;
//             return ;
//         }
//         for(int i = 2;i<n;i++){
//             if(i%2 == 0){
//                 cout<<0<<endl;
//                 return ;
//             }
//         }
//         cout<<1<<endl;
//         return ;
//     }
// // Factorial
//     int fact(int n){
//         int ans = 1;
//         for(int i = 1;i<=n;i++){
//             ans = ans*i;
//         }
//         return ans;
//     }
//     int main(){
//         int a,b;
//         cout<<"enter of the two number:";
//         cin>>a>>b;
//         // A is prime or not
//         Prime(a);
//         // A ka factorial
//         cout<<fact(a)<<endl;
//         // B is prime or not
//         Prime(b);
//         // B ka factorial
//         cout<<fact(b)<<endl;
//         // B-A is prime or not
//         Prime(b-a);
//         // B-A ka factorial
//         cout<<fact(b-a)<<endl;
//     }

// Factorial
    // int fact(int n = 3){  // Default Parameter
    //     int ans = 1;
    //     for(int i = 1;i<=n;i++){
    //         ans = ans*i;
    //     }
    //     return ans;
    // }
    // int main(){
    //     int a,b;
    //     cout<<"enter of the two number:";
    //     cin>>a>>b;
    //     cout<<fact(a)<<endl;
    // }

// Pass by Value
    // void swap(int a, int b){
    //     int c;
    //     c=a;
    //     a=b;
    //     b=c;
    // }
    // int main(){
    //     int c,d;
    //     cin>>c>>d;
    //     swap(c,d);
    //     cout<<c<<" "<<d<<" ";
    // }

// Pass by Refferance
    // void swap(int &a, int &b){
    //     int c;
    //     c=a;
    //     a=b;
    //     b=c;
    // }
    // void swap(float &m, float &n){
    //     float r;
    //     r=m;
    //     m=n;
    //     n=r;
    // }
    // int main(){
    //     int c,d;
    //     cin>>c>>d;

    //     swap(c,d);
    //     cout<<c<<" "<<d<<" "<<endl;

    //     float f1 = 4.8, f2 = 3.6;
    //     swap(f1, f2);
    //     cout<<f1<<" "<<f2;

    // }

// 1: Find the cube of a number using Function. 
    // int cube(int n){
    //     int result = n*n*n;
    //     return result;
    // }
    // int main(){
    //     int a;
    //     cout<<"Enter the value of a:";
    //     cin>>a;
    //     cout<<cube(a)<<endl;
    // }

// 2: Reverse a number n using Function, Constraints: -5000<=n<=5000
//    int reverseNumber(int n){
//     int rev = 0;
//     int sign = 1;

//     if(n < 0){
//         sign = -1;
//         n = -n;  // positive bana diya
//     }

//     while(n != 0){
//         int rem = n % 10;
//         rev = rev * 10 + rem;
//         n = n / 10;
//     }

//     return rev;
//     }

//     int main(){
//     int a;
//     cout << "Enter the value of a: ";
//     cin >> a;

//     if(a < -5000 || a > 5000){
//         cout << "Number out of range";
//     } else {
//         cout << reverseNumber(a) << endl;
//     }

//     return 0;
//     }

    // OR

    // int reverseNumber(int n){
    // int rev = 0;
    // int sign = 1;

    //  while(n != 0){
    //     int rem = n % 10;
    //     rev = rev * 10 + rem;
    //     n = n / 10;
    // }

    // return rev;
    // }

    // int main(){
    // int a;
    // cout << "Enter the value of a: ";
    // cin >> a;

    // if(a < -5000 || a > 5000){
    //     cout << "Number out of range";
    // } else {
    //     cout << reverseNumber(a) << endl;
    // }

    // return 0;
    // }


// 3: There are three numbers a,b,c. Put the value of a into b, put value of b into c and put value of c into a. Do it using Function.
    // int number(int a, int b, int c){
    //     a = b;
    //     b = c;
    //     c = a;
    //     return a;
    // }
    // int main(){
    //     int m,n,o;
    //     cout<<"Enter the three number:";
    //     cin>>m>>n>>o;
    //     cout<<number(m,n,o)<<endl;
    // }

// 4: Swap 2 numbers a, b without using extra variables. Range of 
// -10000<=a,b<=100000. 
    // void swap(int &a , int &b){
    //     a = a+b;
    //     b = a-b;
    //     a = a-b;
    // }
    // int main(){
    //     int m, n;
    //     cout<<"Enter the value:";
    //     cin>>m>>n;
    //     if( -10000<=m || n<=10000){
    //         swap(m,n);
    //         cout<<m<<" "<<n;
    //     }
    // }

// 5: Print “Hello Coder Army” n times using Function.
    // void fun(int n){
    //     for(int i = 1;i<=n;i++){
    //         cout<<"Hello Coder Army"<<endl;
    //     } 
       
    // }
    // int main(){
    //     int a;
    //     cin>>a;
    //     fun(a);
    //     return 0;
    // }

// 6: Given two numbers n, r. Find nCr (Combination). Use Function here.
    // Function to find factorial
    // int  factorial(int n) {
    // int  fact = 1;
    // for(int i = 1; i <= n; i++) {
    //     fact = fact * i;
    // }
    // return fact;
    // }
// Function to calculate nCr
    // int nCr(int n, int r) {
    // return factorial(n) / (factorial(r) * factorial(n - r));
    // }

    // int main() {
    // int n, r;
    // cout << "Enter value of n: ";
    // cin >> n;
    // cout << "Enter value of r: ";
    // cin >> r;

    // if(r > n) {
    //     cout << "Invalid input! r should be <= n";
    // } else {
    //     cout << "nCr = " << nCr(n, r);
    // }

    // return 0;
    // }

// Convert 'a' to 'A'
    // char fun(char ch){
    //     char z = ch-32;  // ch-'a'+'A'
    //     return z;
    // }
    // int main(){
    //     char m;
    //     cin>>m;
    //     cout<<fun(m);
    // }

// Armstrong Number 
    // int countDigit(int n){
    // int count = 0;
    // while(n){
    //     count++;
    //     n /= 10;
    // }
    // return count;
    // }
    // bool Armstrong(int num,int digit){
    //     int n = num,ans = 0,rem;
    //     while(n){
    //         rem = n%10;
    //         n /= 10;
    //         ans = ans+pow(rem,digit);
    //     } 
    //     if(ans == num){
    //         return 1;
    //     }
    //     else{
    //         return 0;
    //     }
    // }
    // int main(){
    // int num;
    // cin>>num;
    // // coumt digit
    // int digit = countDigit(num);
    // // Armstrong number
    // cout<<Armstrong(num,digit);
    // }

    





