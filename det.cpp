#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n;
    int matrix[10][10];
    int submatrix[10][10];

    cout << "Enter the size of the matrix:\n";
    cin >> n;

    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Enter element a" << i + 1 << j + 1 << " : ";
            cin >> matrix[i][j];
        }
    }

    cout << "The entered matrix is:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    int det = 0;

    if (n == 1) {
        det = matrix[0][0];
    } else if (n == 2) {
        det = (matrix[0][0] * matrix[1][1]) - (matrix[1][0] * matrix[0][1]);
    } else {
        for (int x = 0; x < n; x++) {
            // Create submatrix for minors calculation
            int subi = 0;
            for (int i = 1; i < n; i++) {
                int subj = 0;
                for (int j = 0; j < n; j++) {
                    if (j == x) 
                        continue;
                    submatrix[subi][subj] = matrix[i][j];
                    subj++;
                }
                subi++;
            }

            // Calculate the determinant of the submatrix using 2x2 determinant formula for 2x2 matrices
            int subdet = 0;
            if (n - 1 == 2) {
                subdet = (submatrix[0][0] * submatrix[1][1]) - (submatrix[1][0] * submatrix[0][1]);
            } else {
                // Recursive calculation for larger matrices (nested loops)
                subdet = 0;
                for (int i = 0; i < n - 1; i++) {
                    int minor[10][10];
                    for (int j = 0; j < n - 1; j++) {
                        int row = 0, col = 0;
                        for (int k = 0; k < n; k++) {
                            if (k == x)
                                continue;
                            minor[row][col] = matrix[j + 1][k];
                            col++;
                        }
                        row++;
                    }
                }
            }
            det += pow(-1, x) * matrix[0][x] * subdet;
        }
    }

    cout << "Determinant of the matrix is " << det << endl;

    return 0;
}
