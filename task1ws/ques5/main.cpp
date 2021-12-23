#include <iostream>
using namespace std;

int octal_n(int a){
    
    
    int i = 0;
    int octalNum[50];
    while (a != 0) {
 
        
        octalNum[i] = a % 8;
        a = a / 8;
        i++;
    }
 
    
    for (int j = i - 1; j >= 0; j--)
        cout << octalNum[j];
    cout<<endl;    
}
void binary_n(int a ){
    int i=0;
    int binaryNum[50];
    while (a!=0){
        binaryNum[i] = a % 2;
        a = a / 2;
        i++;}
    
 
    
    for (int j = i - 1; j >= 0; j--)
        cout << binaryNum[j];
    cout<<endl;    
}    

void hexadeci_n(int a ){
     
    char hexaDeciNum[100];
 
    
    int i = 0;
    while (a != 0) {
        
        int r = 0;
 
       
        r = a % 16;
 
        
        if (r < 10) {
            hexaDeciNum[i] = r + 48;
            i++;
        }
        else {
            hexaDeciNum[i] = r + 55;
            i++;
        }
 
        a = a / 16;
    }
 
    
    for (int j = i - 1; j >= 0; j--)
        cout << hexaDeciNum[j];
}

int main(){
    int a ;
    
    cout<<"enter a number";
    cin>>a;
    octal_n(a);
    binary_n(a);
    hexadeci_n(a);
    return 0;
    
}