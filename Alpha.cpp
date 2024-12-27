#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    int alpha = (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');

    switch (alpha) {
        case 1:
            cout << ch << " is an alphabet." << endl;
            break;
        case 0:
            cout << ch << " is not an alphabet." << endl;
            break;
        default:
            cout << "Unexpected input." << endl;
            break;
    }

    return 0;
}
