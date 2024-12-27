#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    int n, choice;
    int matrix1[10][10], matrix2[10][10], result[10][10];
    int cofactor[10][10], adjoint[10][10],transpose[10][10];
    double inverse[10][10];

    cout<<"____________________________\n\n";
    cout << "Matrix Calculator\n";
    cout<<"____________________________\n\n";
    cout << "1. Matrix Addition\n";
    cout << "2. Matrix Subtraction\n";
    cout << "3. Matrix Multiplication\n";
    cout << "4. Determinant\n";
    cout << "5. Matrix Inverse\n";
    cout << "Enter your choice: ";
    cin >> choice;

   
    cout << "Enter the size of the square matrix (n x n): ";
    cin >> n;

    cout << "Enter the elements of the first matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Enter element a" << i + 1 << j + 1 << " : ";
            cin >> matrix1[i][j];
        }
    }

    if (choice == 1 || choice == 2 || choice == 3) {
        cout << "Enter the elements of the second matrix:\n";
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << "Enter element b" << i + 1 << j + 1 << " : ";
                cin >> matrix2[i][j];
            }
        }
    }

    switch (choice) {
        case 1: 
            cout << "Result of Matrix Addition:\n";
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    result[i][j] = matrix1[i][j] + matrix2[i][j];
                    cout << result[i][j] << " ";
                }
                cout << endl;
            }
            break;

        case 2: 
            cout << "Result of Matrix Subtraction:\n";
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    result[i][j] = matrix1[i][j] - matrix2[i][j];
                    cout << result[i][j] << " ";
                }
                cout << endl;
            }
            break;

        case 3: 
            cout << "Result of Matrix Multiplication:\n";
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    result[i][j] = 0;
                    for (int k = 0; k < n; k++) {
                        result[i][j] += matrix1[i][k] * matrix2[k][j];
                    }
                    cout << result[i][j] << " ";
                }
                cout << endl;
            }
            break;

        case 4: 
        {
            int det = 0;
            if (n == 1) {
               det = matrix1[0][0];
            } else if (n == 2) {
                det = matrix1[0][0] * matrix1[1][1] - matrix1[0][1] * matrix1[1][0];
            } else {
                for (int x = 0; x < n; x++) {
                    int submatrix[10][10];
                    int subi = 0;
                    for (int i = 1; i < n; i++) {
                        int subj = 0;
                        for (int j = 0; j < n; j++) {
                            if (j == x) continue;
                             matrix1[i][j]=submatrix[subi][subj];
                            subj++;
                        }
                        subi++;
                    }
                    det += pow(-1, x) * matrix1[0][x] * 
                           (submatrix[0][0] * submatrix[1][1] - submatrix[0][1] * submatrix[1][0]); // Inline determinant for 2x2
                }
            }
            cout << "Determinant of the matrix is: " << det << endl;
        }
            break;

        case 5:
        {
            int det = matrix1[0][0] * matrix1[1][1] - matrix1[0][1] * matrix1[1][0];
            if (det == 0) {
                cout << "Inverse cannot be calculated because determinant is zero.\n";
                break;
            }

            for (int row = 0; row < n; row++) {
                for (int col = 0; col < n; col++) {
                    int submatrix[10][10];
                    int subi = 0;
                    for (int i = 0; i < n; i++) {
                        if (i == row) continue;
                        int subj = 0;
                        for (int j = 0; j < n; j++) {
                            if (j == col) continue;
                        matrix1[i][j]=submatrix[subi][subj] ;
                            subj++;
                        }
                        subi++;
                    }
                    cofactor[row][col] = pow(-1, row + col) * 
                (submatrix[0][0] * submatrix[1][1] - submatrix[0][1] * submatrix[1][0]); // Inline determinant for 2x2
                }
            }

            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    adjoint[j][i] = cofactor[i][j];
                }
            }

            cout << "Inverse of the matrix is:\n";
            cout << fixed << setprecision(2);
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    inverse[i][j] = adjoint[i][j] / static_cast<double>(det);
                    cout << inverse[i][j] << " ";
                }
                cout << endl;
            }
        }
            break;
    //       case 6:{
    //         for (int i = 0; i < rows; i++) {
    //     for (int j = 0; j < cols; j++) {
    //         transpose[j][i] = matrix1[i][j];
    //     }
    // }

    // // Output the transpose
    // cout << "The transpose of the matrix is:" << endl;
    // for (int i = 0; i < cols; i++) { // Note: Rows and columns are swapped
    //     for (int j = 0; j < rows; j++) {
    //         cout << transpose[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    //      }
        default:
            cout << "Invalid choice.\n";
            break;
    }

    return 0;
}
