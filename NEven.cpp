#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Enter a positive integer: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive integer greater than 0." << endl;
        return 1;
    }

    for (int i = 2; i <= n; i += 2) { 
        sum += i;
    }
    cout << "The sum of all even numbers from 1 to " << n << " is: " << sum << endl;
    return 0;
}
