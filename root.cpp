#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double a,b,c,d;
    cout<<"Enter the cofficent of a : ";
    cin>>a;
    cout<<"Enter the cofficent of b : ";
    cin>>b;
    cout<<"Enter the cofficent of c : ";
    cin>>c;
    if (a == 0) {
        cout << "This is not a quadratic equation (a cannot be zero)." << endl;
        return 0;
    }
     
    d=(b*b)-4*a*c;
 int value;
    if (d > 0) {
        value = 1;
    } else if (d == 0) {
       value = 2;
    } else {
        value = 3; 

    switch (value) {
        case 1: {
            double root1 = (-b + sqrt(d)) / (2 * a);
            double root2 = (-b - sqrt(d)) / (2 * a);
            cout<<endl;
            cout << "The roots are real and distinct." << endl;
            cout << "Root 1 = " << root1 << endl;
            cout << "Root 2 = " << root2 << endl;
            break;
        }
        case 2: {
            double root = -b / (2 * a);
            cout<<endl;
            cout << "The roots are real and equal." << endl;
            cout << "Root: " << root << endl;
            break;
        }
        case 3: {
            double real = -b / (2 * a);
            double imagin = sqrt(-d) / (2 * a);
            cout<<endl;
            cout << "The roots are complex and conjugate." << endl;
            cout << "Root 1 = " << real << " + " << imagin << "i" << endl;
            cout << "Root 2 =" << real << " - " << imagin << "i" << endl;
            break;
        }
        default:
        cout<<endl;
            cout << "Unexpected case encountered." << endl;
            break;
    }
}
}