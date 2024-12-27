#include <iostream>
using namespace std;

int main() {
     int n;
    int num = 7;
    cout << "Guess the number between 1 and 10: ";

    while (cin >>n) {
        if (n == num) {
            cout << "Correct! The number was " << num << endl;
            break;
        } else {
            cout << "Wrong guess again : ";
        }
    }

    return 0;
}