#include <iostream>
using namespace std;

int main() {
   int size = 5; 
    int years[size] = {3, 7, 6, 2, 8};

    for (int i = 0; i < size; ++i) {
        cout << "Employee " << i + 1 << " has worked for " << years[i] << " years  ";
        
        if (years[i] > 5) {
            cout << "Qualify for a 10% bonus" << endl;
        } else {
            cout << "Not qualify for a bonus" << endl;
        }
    }

    return 0;
}