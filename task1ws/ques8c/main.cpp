#include <iostream>//verifying the result [A.B]'=B'.A'
using namespace std;
void transpose(int mat1[][3], int B[][3])
{
    int i, j;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            B[i][j] = mat1[j][i];
}

int main(){
     int mat1[3][3], mat2[3][3], mult[3][3], r1, c1, r2, c2, i, j, k;

    cout << "Enter rows and columns for first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns for second matrix: ";
    cin >> r2 >> c2;

    
    while (c1!=r2)
    {
        cout << "Error! no of col of first mattrix does not match the no of rows of the sec matrix";

        cout << "Enter rows and columns for first matrix: ";
        cin >> r1 >> c1;

        cout << "Enter rows and columns for second matrix: ";
        cin >> r2 >> c2;
    }

  
    cout << endl << "Enter elements of matrix 1:" << endl;
    for(i = 0; i < r1; ++i)
        for(j = 0; j < c1; ++j)
        {
            cout << "Enter element a" << i + 1 << j + 1 << " : ";
            cin >> mat1[i][j];
        }

    
    cout << endl << "Enter elements of matrix 2:" << endl;
    for(i = 0; i < r2; ++i)
        for(j = 0; j < c2; ++j)
        {
            cout << "Enter element b" << i + 1 << j + 1 << " : ";
            cin >> mat2[i][j];
        }

    // Initializing elements of matrix mult to 0.
    for(i = 0; i < r1; ++i)
        for(j = 0; j < c2; ++j)
        {
            mult[i][j]=0;
        }

    for(i = 0; i < r1; ++i)
        for(j = 0; j < c2; ++j)
            for(k = 0; k < c1; ++k)
            {
                mult[i][j] += mat1[i][k] * mat2[k][j];
            }

    // Displaying the multiplication of two matrix.
    cout << endl << "Output Matrix: " << endl;
    for( i = 0; i < r1; ++i)
    for( j = 0; j < c2; ++j)
    {
        cout << " " << mult[i][j];
        if(j == c2-1)
            cout << "\n";
    }
     int B[3][3];

    transpose(mult, B);

    cout <<"Result matrix is \n";
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        cout <<" "<< B[i][j];
        cout <<"\n";
    }
    //now let us write the code for B'A'
    int C[3][3];
    int D[3][3];
    transpose(mat2,C);
    transpose(mat1,D);
      int E[3][3], F[3][3], mult1[3][3], r11, c11, r22, c22;

    cout << "Enter rows and columns for first matrix: ";
    cin >> r11 >> c11;
    cout << "Enter rows and columns for second matrix: ";
    cin >> r22 >> c22;

    
    while (c11!=r22)
    {
        cout << "Error! no of col of first mattrix does not match the no of rows of the sec matrix";

        cout << "Enter rows and columns for first matrix: ";
        cin >> r11 >> c11;

        cout << "Enter rows and columns for second matrix: ";
        cin >> r22 >> c22;
    }

  
    cout << endl << "Enter elements of matrix 1:" << endl;
    for(i = 0; i < r11; ++i)
        for(j = 0; j < c11; ++j)
        {
            cout << "Enter element a" << i + 1 << j + 1 << " : ";
            cin >> mat1[i][j];
        }

    
    cout << endl << "Enter elements of matrix 2:" << endl;
    for(i = 0; i < r22; ++i)
        for(j = 0; j < c22; ++j)
        {
            cout << "Enter element b" << i + 1 << j + 1 << " : ";
            cin >> mat2[i][j];
        }

    // Initializing elements of matrix mult to 0.
    for(i = 0; i < r11; ++i)
        for(j = 0; j < c22; ++j)
        {
            mult1[i][j]=0;
        }

    for(i = 0; i < r11; ++i)
        for(j = 0; j < c22; ++j)
            for(k = 0; k < c11; ++k)
            {
                mult1[i][j] += mat1[i][k] * mat2[k][j];
            }

    // Displaying the multiplication of two matrix.
    cout << endl << "Output Matrix: " << endl;
    for( i = 0; i < r11; ++i)
    for( j = 0; j < c22; ++j)
    {
        cout << " " << mult1[i][j];
        if(j == c22-1)
            cout << "\n";
    }
    return 0;
    
    
    
    
    
    
    
}
    
