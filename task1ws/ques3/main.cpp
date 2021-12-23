#include <iostream>
#include <set>
using namespace std;

int main()
{
    int mat1[10][10], r1,c1;
    set <int> rows={};
    set <int> cols={};
    
    cout << "Enter rows and columns  ";
    cin >> r1 >> c1;
     cout << endl << "Enter elements of matrix 1:" << endl;
    for( int i = 0; i < r1; ++i) {
        for(int j = 0; j < c1; ++j)
        {
            cout << "Enter element a" << i + 1 << j + 1 << " : ";
            cin >> mat1[i][j];
        }
    }
     for( int i = 0; i < r1; ++i) {
        for(int j = 0; j < c1; ++j)
        {
            if (mat1[i][j]==0){
                rows.insert(i);
                cols.insert(j);
                
                }
            }
     }
     for( int i = 0; i < r1; ++i) {
        for(int j = 0; j < c1; ++j)
        {  
            if (rows.find(i)!=rows.end()){
                
                    mat1[i][j]=0;
            }
            if(cols.find(j)!=cols.end()){
                
                    mat1[i][j]=0;
            }
            
            
        }
     }
     //printing out the matrix 
     cout << endl << "Output Matrix: " << endl;
    for(int i = 0; i < r1; ++i)
    for(int j = 0; j < c1; ++j)
    {
        cout << " " << mat1[i][j];
        if(j == c1-1)
            cout << "\n";
    }
     
     return 0;
                
            
                
   
     
        
            
}
    
     