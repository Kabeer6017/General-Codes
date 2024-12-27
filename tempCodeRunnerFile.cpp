#include<iostream>
using namespace std;

int main() {
    
    int choice, determinant;
    int size;
    double matrix1[3][3], matrix2[3][3], result[3][3];
       cout<<"___________________________"<<endl;
    cout << "The size of the matrix "<<endl<<endl;
    cout<<"1. for 2x2 "<<endl;
    cout<<"2. for 3x3 "<<endl<<endl;
    cout<<"Enter Your Choise: ";
    cin >> size;
    cout<<"\nSelect Operation\n"<<endl;
cout << "1. Addition\n";
cout << "2. Subtraction\n";
cout << "3. Multiplication\n";
cout << "4. Transpose\n";
cout << "5. Determinant\n";
cout << "6. Inverse\n\n";
cout<<"___________________________"<<endl;
cout<<"Enter Number for Selection : ";

    cin >> choice;
    if (size != 1 && size != 2) {
        cout << "Invalid matrix size! Only 2x2 and 3x3 matrices are supported." << endl;
        return 0;
    }

    cout << "Enter elements of matrix 1:" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << "Enter element of " << i + 1 << "th row and " << j + 1 << "th column: ";
            cin >> matrix1[i][j];
        }
    }

    switch (choice) {
    case 1:
        cout << "Enter elements of matrix 2:" << endl;
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                cout << "Enter element of " << i + 1 << "th row and " << j + 1 << "th column: ";
                cin >> matrix2[i][j];
            }
        }
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                result[i][j] = matrix1[i][j] + matrix2[i][j];
            }
        }
        cout << "Matrix after addition:" << endl;
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                cout << result[i][j] << " ";
            }
            cout << endl;
        }
        break;

    case 2:
        cout << "Enter elements of matrix 2:" << endl;
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                cout << "Enter element of " << i + 1 << "th row and " << j + 1 << "th column: ";
                cin >> matrix2[i][j];
            }
        }
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                result[i][j] = matrix1[i][j] - matrix2[i][j];
            }
        }
        cout << "Matrix after subtraction:" << endl;
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                cout << result[i][j] << " ";
            }
            cout << endl;
        }
        break;

    case 3:
        cout << "Enter elements of matrix 2:" << endl;
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                cout << "Enter element of " << i + 1 << "th row and " << j + 1 << "th column: ";
                cin >> matrix2[i][j];
            }
        }
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                result[i][j] = 0;
                for (int k = 0; k < size; k++) {
                    result[i][j] += matrix1[i][k] * matrix2[k][j];
                }
            }
        }
        cout << "Matrix after multiplication:" << endl;
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                cout << result[i][j] << " ";
            }
            cout << endl;
        }
        break;

    case 4:
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                result[j][i] = matrix1[i][j];
            }
        }
        cout << "Transpose of the matrix is:" << endl;
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                cout << result[i][j] << " ";
            }
            cout << endl;
        }
        break;

    case 5:
        if (size == 2) {
            determinant = (matrix1[0][0] * matrix1[1][1]) - (matrix1[0][1] * matrix1[1][0]);
            cout << "Determinant: " << determinant << endl;
        }
        else if (size == 3) {
            determinant = matrix1[0][0] * (matrix1[1][1] * matrix1[2][2] - matrix1[1][2] * matrix1[2][1]) -
                matrix1[0][1] * (matrix1[1][0] * matrix1[2][2] - matrix1[1][2] * matrix1[2][0]) +
                matrix1[0][2] * (matrix1[1][0] * matrix1[2][1] - matrix1[1][1] * matrix1[2][0]);
            cout << "Determinant: " << determinant << endl;
        }
        break;

    case 6:
        if (size == 2) {
            determinant = (matrix1[0][0] * matrix1[1][1]) - (matrix1[0][1] * matrix1[1][0]);
            if (determinant == 0) {
                cout << "The matrix is singular and does not have an inverse." << endl;
            }
            else {
                result[0][0] = matrix1[1][1] / determinant;
                result[0][1] = -matrix1[0][1] / determinant;
                result[1][0] = -matrix1[1][0] / determinant;
                result[1][1] = matrix1[0][0] / determinant;
                cout << "Inverse of the matrix is:" << endl;
                for (int i = 0; i < 2; i++) {
                    for (int j = 0; j < 2; j++) {
                        cout << result[i][j] << " ";
                    }
                    cout << endl;
                }
            }
        }
        else if (size == 3) {
            double det = matrix1[0][0] * (matrix1[1][1] * matrix1[2][2] - matrix1[1][2] * matrix1[2][1]) -
                matrix1[0][1] * (matrix1[1][0] * matrix1[2][2] - matrix1[1][2] * matrix1[2][0]) +
                matrix1[0][2] * (matrix1[1][0] * matrix1[2][1] - matrix1[1][1] * matrix1[2][0]);
            if (det == 0) {
                cout << "The matrix is singular and does not have an inverse." << endl;
            }
            else {
                cout << "Inverse computation for 3x3 matrix is not implemented in this code." << endl;
            }
        }
        break;

    default:
        cout << "Invalid input" << endl;
    }
return 0;
}