#include <iostream>
using namespace std;
void bubbleSort(int arr[], int n) {
   for (int i = 0; i < n - 1; i++) {
      if (arr[i] > arr[i + 1]) {
         int temp = arr[i];
         arr[i] = arr[i+1];
         arr[i+1] = temp;
      }
   }
   if (n - 1 > 1) {
      bubbleSort(arr, n - 1);
   }
}
int main() {
    int n;
    
    cout<<"enter size"<<endl;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++)
       cin>>arr[i];

   
   bubbleSort(arr, n);
   for (int i = 0; i < n; i++) {
      cout<< arr[i]<<"\t";
   }
   return 0;
}