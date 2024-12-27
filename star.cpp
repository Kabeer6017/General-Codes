#include <iostream>
using namespace std;

int main() {
    int n, re = 0,cop;

    cout << "Enter a number: ";
    cin >> n;
     cop= n;
    while (n != 0) {
        re = re * 10 + n % 10; 
        n /= 10;                                       
    }
    
    if(re==cop){
        cout<<"Your enterd number is Palindrome";
    }else{
        cout<<"Your enterd number is not a Palindrome";
    }
    return 0;
}
t