#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
bool Hillno(vector<int>& arr) {
        int count = 0;
        for (int i = 1 ; i < arr.size() ; i++) {
            if(arr[i] == arr[i-1]) {
                return false;
            }
            
            else if (arr[i] < arr[i-1]) {
                count++;
            }
            
            else if (arr[i] > arr[i-1] && count > 0) {
                return false;
            }
            
        }
        
        if (count == 0 || count == arr.size()-1) {
            return false;
        }
        else {
            return true;
        }
    }
int main(){
    int n;
    int j;
    
    
    std::vector <int> arr ;
    cout<<"Enter the size"<<endl;
    cin>>n;
    cout<<"enter the elements";
    for (int i=0;i<n;i++){
        cin>>j;
        arr.push_back(j);}
    bool ans=Hillno(arr);
    if (ans==1)
        cout<<"it is a hill no"<<endl;
    else
        cout<<"it is not a hill no"<<endl;
    
    return 0;
    
    
    
    
} 