#include <iostream>
#include <iomanip>
using namespace std;

const int ROWS = 12;
const int COLS = 7;
const int Fclass = 18000;
const int Bclass = 14000;
const int Eclass = 10000;

bool bookFclass(int Seats[][COLS], int rows, int cols, int noOfSeats);
bool bookBclass(int Seats[][COLS], int rows, int cols, int noOfSeats);
bool bookEclass(int Seats[][COLS], int rows, int cols, int noOfSeats);
int  checkSeats(int Seats[][COLS], int rows, int cols);
void viewPlan(int Seats[][COLS], int rows, int cols);
void getFare();
bool systemReset(int Seats[][COLS], int rows, int cols);
bool bookSeats(int Seats[][COLS], int startRow, int endRow, int cols, int noOfSeats);

int main() {
    int Seats[ROWS][COLS] = {0}; 
    int choice;
    do {
        cout << "-----------------------------------------------------\n";
        cout << "       Welcome to Airplane Reservation System        \n";
        cout << "-----------------------------------------------------\n";
        cout << "1. Book First Class Seats\n";
        cout << "2. Book Business Class Seats\n";
        cout << "3. Book Economy Class Seats\n";
        cout << "4. View Airplane Seating Plan\n";
        cout << "5. View Fare(s)\n";
        cout << "6. System Reset\n";
        cout << "7. Exit from The Booking System\n";
        cout << "-----------------------------------------------------\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int seats;
                cout << "Enter the number of seats to book in First Class: ";
                cin >> seats;
                if (!bookFclass(Seats, ROWS, COLS, seats))
                    cout << "Booking failed. Not enough seats available.\n";
                break;
            }
            case 2: {
                int seats;
                cout << "Enter the number of seats to book in Business Class: ";
                cin >> seats;
                if (!bookBclass(Seats, ROWS, COLS, seats))
                    cout << "Booking failed. Not enough seats available.\n";
                break;
            }
            case 3: {
                int seats;
                cout << "Enter the number of seats to book in Economy Class: ";
                cin >> seats;
                if (!bookEclass(Seats, ROWS, COLS, seats))
                    cout << "Booking failed. Not enough seats available.\n";
                break;
            }
            case 4:
                viewPlan(Seats, ROWS, COLS);
                break;
            case 5:
                getFare();
                break;
            case 6:
                if (systemReset(Seats, ROWS, COLS))
                    cout << "System reset successfully.\n";
                break;
            case 7:
                cout << "Exiting the system. Thank you!\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 7);

    return 0;
}

bool bookFclass(int Seats[][COLS], int rows, int cols, int noOfSeats) {
    return bookSeats(Seats, 0, 2, cols, noOfSeats);
}

bool bookBclass(int Seats[][COLS], int rows, int cols, int noOfSeats) {
    return bookSeats(Seats, 2, 4, cols, noOfSeats);
}

bool bookEclass(int Seats[][COLS], int rows, int cols, int noOfSeats) {
    return bookSeats(Seats, 4, 12, cols, noOfSeats);
}

bool bookSeats(int Seats[][COLS], int startRow, int endRow, int cols, int noOfSeats) {
    int availableSeats = 0;
    for (int i = startRow; i < endRow; ++i)
        for (int j = 0; j < cols; ++j)
            if (Seats[i][j] == 0)
                availableSeats++;

    if (availableSeats < noOfSeats) return false;

    for (int i = startRow; i < endRow; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (noOfSeats == 0) return true;
            if (Seats[i][j] == 0) {
                Seats[i][j] = 1;
                noOfSeats--;
            }
        }
    }
    return true;
}

int checkSeats(int Seats[][COLS], int rows, int cols) {
    int count = 0;
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            if (Seats[i][j] == 0)
                count++;
    return count;
}

void viewPlan(int Seats[][COLS], int rows, int cols) {
    cout << "Seating Plan (0: Available, 1: Reserved):\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j)
            cout << setw(2) << Seats[i][j] << " ";
        cout << "\n";
    }
}

void getFare() {
    cout << "Fares:\n";
    cout << "First Class: Rs. " << Fclass << "\n";
    cout << "Business Class: Rs. " << Bclass << "\n";
    cout << "Economy Class: Rs. " << Eclass << "\n";
}

bool systemReset(int Seats[][COLS], int rows, int cols) {
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            Seats[i][j] = 0;
    return true;
}
