#include <iostream>
using namespace std;
int main() {
    int age, acti;
    float gpa;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your GPA: ";
    cin >> gpa;
    cout << "Enter the number of extracurricular activities you participated in: ";
    cin >> acti;
    if (age >= 18 && age <= 25) {
        if (gpa >= 3.5) {
            if (acti >= 2) {
                cout << "Congratulations! You are eligible to apply for the scholarship." << endl;
            } else {
                cout << "Ineligible: You 2 extracurricular activities" << endl;
            }
        } else {
            cout << "Inelligible:must have GPA 3.5 or higher" << endl;
        }
    } else {
        cout << "Inelligible: Must have age between 18 and 25 years" << endl;
    }
    return 0;
}
