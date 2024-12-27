#include <iostream>
#include <string> 
using namespace std;
int main() {
    string correctPassword = "hello123"; 
    string userInput;
    cout << "Enter the correct password: ";
    while (true) {
        cin >> userInput; 

        if (userInput == correctPassword) {
            cout << "Password is correct" << endl;
            break;
        } else {
            cout << "Incorrect password Try again: ";
        }
    }
    return 0; 
}