#include <iostream>
using namespace std;
int main(){


    int a[10][10], b[10][10], addi[10][10] ;
    int r1, c1, r2, c2, i, j;





    cout << "Enter Rows for first matrix: ";
    cin >> r1;
    cout << "Enter Columns for first matrix: ";
    cin>> c1;
    cout << "Enter Rows for second matrix: ";
    cin >> r2;
      cout << "Enter Columns for second matrix: ";
    cin>> c2;






    cout << endl << "Enter elements of matrix 1:" << endl;


    for(i = 0; i < r1; ++i)
        for(j = 0; j < c1; ++j)
        {
            cout << "Enter element a" << i + 1 << j + 1 << " : ";
            cin >> a[i][j];
        }






    cout << endl << "Enter elements of matrix 2:" << endl;

    
    for(i = 0; i < r2; ++i)
        for(j = 0; j < c2; ++j)
        {
            cout << "Enter element b" << i + 1 << j + 1 << " : ";
            cin >> b[i][j];
        }
        





for (int i = 0; i < r1; ++i) {
    for (int j = 0; j < c1; ++j) {
        addi[i][j] = a[i][j]  b[i][j];
    }
}





        cout << endl << "Output Matrix: " << endl;
    for(int i = 0; i < r1; ++i) {
        for(int j = 0; j < c2; ++j) {
            cout << " " << addi[i][j];
        }
        cout << endl;
    }




    return 0;
}