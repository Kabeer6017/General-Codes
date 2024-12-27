#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "Multiplication Table for " << n << ":" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << i << " x " << n << " = " << n * i << endl;
    }
    return 0;
}