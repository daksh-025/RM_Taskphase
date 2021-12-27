#include <iostream>// code to sort the string in each index of the array
#include <string>
#include <algorithm>
using namespace std;
void sortString(string &stri)
{
   sort(stri.begin(), stri.end());
   cout << stri;
}
int main(){
    int n;
    int i=0;
    
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    string arr [n] ;
    cout<<"enter the array elements"<<endl;
    for (int j=0;i<n;i++)
        cin>>arr[j];
    while(i<n){
        sortString(arr[i]);
        i++;
        
        
    }
        
    
        
    return 0;
}