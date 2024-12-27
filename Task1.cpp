#include <iostream>
using namespace std;

int main() {
    int choice;
    double num1, num2, result;
    bool flag = true;

    while (flag) {
        cout << "Menu:\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 5) {
            flag = false;
            cout << "Exiting the program.\n";
            break;
        }

        cout << "Enter two numbers: ";
        cin >> num1 >> num2;

        switch (choice) {
            case 1:
                result = num1 + num2;
                cout << "Result: " << result << endl;
                break;
            case 2:
                result = num1 - num2;
                cout << "Result: " << result << endl;
                break;
            case 3:
                result = num1 * num2;
                cout << "Result: " << result << endl;
                break;
            case 4:
                if (num2 != 0) {
                    result = num1 / num2;
                    cout << "Result: " << result << endl;
                } else {
                    cout << "Error: Division by zero is not allowed.\n";
                }
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}