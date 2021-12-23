
#include <iostream>
#include <string>
using namespace std;
int main ()
{
string str=""; 
cin>>str;
cout<<"the string you entered is "<<str;


int Length = str.length();
//using bubble sort to sort the characters inside a name 
for (int i = 0; i < Length; i++)
{
    for (int j = i+1; j < Length; j++)
{
        if (str[i] > str[j]) 

{
//performs swap
        char temporary = str[i];
        str[i] = str[j];
        str[j] = temporary;
}
}   
}
cout<<"\n String after sorting is: "<<str<<" \n";
return 0;
}
