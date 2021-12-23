#include <iostream>
using namespace std;
   char* copyString(char s[])
{
    int i;
    char* str2;
    str2 = new char[50];//memory created dynamically on the heap
 
    
    for (i = 0; s[i] != '\0'; i++) {
 
        
        str2[i] = s[i];
    }
 
    
    return (char *)str2;}
    
int main() {
 
    
    char str1[50] = "";
    cout<<"enter a string ";
    cin>>str1;
    char *str2;
    
 
    
    str2 = copyString(str1);
    for (int i=0;i<sizeof(str2);i++)
        cout<<str2[i];
    return 0;
}
