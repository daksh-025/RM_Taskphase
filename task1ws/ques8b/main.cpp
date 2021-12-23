#include <iostream>// performing transpose 
using namespace std;


   
     
using namespace std;


void transpose(int mat1[][3], int B[][3])
{
    int i, j;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            B[i][j] = mat1[j][i];
}


int main()
{
     int mat1[3][3],  r1, c1;

    cout << "Enter rows and columns for first matrix: ";
    cin >> r1 >> c1;
    
    cout << endl << "Enter elements of matrix 1:" << endl;
    for(int i = 0; i < r1; ++i)
        for(int j = 0; j < c1; ++j)
        {
            cout << "Enter element a" << i + 1 << j + 1 << " : ";
            cin >> mat1[i][j];
        }
    

    int B[3][3], i, j;

    transpose(mat1, B);

    cout <<"Result matrix is \n";
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        cout <<" "<< B[i][j];
        cout <<"\n";
    }

	return 0;
}

   
