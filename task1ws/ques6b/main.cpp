#include <iostream>
using namespace std;
void bubblesort(int arr[100]){
    int n=0;
    int j;
    int temp;
    cout<<"Enter the Size (max. 100): ";
    cin>>n;
    cout<<"Enter "<<n<<" Numbers: ";
    for(int i=0; i<n; i++)
        cin>>arr[i];
    cout<<"\nSorting the Array using Bubble Sort Technique..\n";
    for(int i=0; i<(n-1); i++)
    {
        for(j=0; j<(n-i-1); j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
}
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    int i, numb, low, high, middle;
    cout<<"enter no to find";
    cin>>numb;
    
   
    low = arr[0];
    high = arr[sizeof(arr)-1];
    middle = (low+high)/2;
    while(low <= high)
    {
        if(arr[middle]<numb)
            low = middle+1;
        else if(arr[middle]==numb)
        {
            cout<<"\nThe number, "<<numb<<" found at Position "<<middle+1;
            break;
        }
        else
            high = middle-1;
        middle = (low+high)/2;
    }
    
    if(low>high)
        cout<<"\nThe number, "<<numb<<" is not found in given Array";
    else{
        cout<<"the no is found at"<<middle;
    }
    
   
    
}
void selectionsort(int arr[100]){
    int i,j,n,loc,temp,min;
    cout<<"enter the no of elements";
    cin>>n;
    cout<<"enter the elements";
 
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
 
    for(i=0;i<n-1;i++)
    {
        min=arr[i];
        loc=i;
        for(j=i+1;j<n;j++)
        {
            if(min>arr[j])
            {
                min=arr[j];
                loc=j;
            }
        }
 
        temp=arr[i];
        arr[i]=arr[loc];
        arr[loc]=temp;
    }
 
    cout<<"the sorted list is ";
    for(i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    int  numb, low, high, middle;
    cout<<"enter no to find";
    cin>>numb;
    
   
    low = arr[0];
    high = arr[sizeof(arr)-1];
    middle = (low+high)/2;
    while(low <= high)
    {
        if(arr[middle]<numb)
            low = middle+1;
        else if(arr[middle]==numb)
        {
            cout<<"\nThe number, "<<numb<<" found at Position "<<middle+1;
            break;
        }
        else
            high = middle-1;
        middle = (low+high)/2;
    }
    
    if(low>high)
        cout<<"\nThe number, "<<numb<<" is not found in given Array";
    else{
        cout<<"the no is found at"<<middle;
    }
    
   
}
int main(){
    char num;
    cout<<"enter s for selection sort "<<endl;
    cout<<"enter b for bubble sort "<<endl;
    cin>>num;
    int arr[100];
  
    switch (num){
        case 's':selectionsort(arr);
        case 'b':bubblesort(arr);
    return 0;    
       
}}
    
    