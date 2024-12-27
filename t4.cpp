#include <iostream>
using namespace std;

int main() {
    int firstNum, secondNum;
    
    
    cout << "Enter the first integer (must be less than secondNum): ";
    cin >> firstNum;
    cout << "Enter the second integer: ";
    cin >> secondNum;

    while (firstNum >= secondNum) {
        cout << "The first number must be less than the second number.\n";
        cout << "Enter the first integer (must be less than secondNum): ";
        cin >> firstNum;
        cout << "Enter the second integer: ";
        cin >> secondNum;
    }

    cout << "\nOdd numbers between " << firstNum << " and " << secondNum << ":\n";
    int num = (firstNum % 2 == 0) ? firstNum + 1 : firstNum;
    while (num < secondNum) {
        cout << num << " ";
        num += 2;
    }
    cout << endl;
    int sum_of_evens = 0;
    num = (firstNum % 2 == 1) ? firstNum + 1 : firstNum; 
    while (num < secondNum) {
        sum_of_evens += num;
        num += 2;
    }
    cout << "Sum of even numbers between " << firstNum << " and " << secondNum << ": " << sum_of_evens << endl;
    cout << "\nNumbers and their squares between 1 and 10:\n";
    num = 1;
    while (num <= 10) {
        cout << num << "^2 = " << num * num << endl;
        num++;
    }

    int sum_of_squares_of_odds = 0;
    num = (firstNum % 2 == 0) ? firstNum + 1 : firstNum; 
    while (num < secondNum) {
        sum_of_squares_of_odds += num * num;
        num += 2;
    }
    cout << "\nSum of the square of odd numbers between " << firstNum << " and " << secondNum << ": " << sum_of_squares_of_odds << endl;
    cout << "\nAll uppercase letters:\n";
    char ch = 'A';
    while (ch <= 'Z') {
        cout << ch << " ";
        ch++;
    }
    cout << endl;

    return 0;
}