#include<iostream>
using namespace std;//sum without using recrusion 
int sumofdigit(int n)
{
    if (n == 0)
    return 0;
    return (n % 10 + sumofdigit(n / 10));
}
int main() {
   int a, s = 0;
   cout << "Enter the number : ";
   cin >> a;
   while (a != 0) {
      s = s + a % 10;
      a = a / 10;
   }
   cout << "\nThe sum of the digits : "<< s;



    int num ;//sum using recursion 
    cout<<"enter the no "<<endl;
    cin>>num;
    int result = sumofdigit(num);
    cout << "Sum of digits in "<< num
       <<" is "<<result << endl;
    return 0;
}