#include <iostream>
using namespace std;
int main(){
    bool exit = false;
    int Opnum;
   while(1==1){


cout<<"Welcome to Mathematica"<<endl;
    cout<<"----------------------"<<endl<<endl;
cout<< "1. Check Palindrome"<<endl;
cout<< "2. Print Fibonacci Series"<<endl;
cout<< "3. Check Prime Number"<<endl;
cout<< "4. Exit"<<endl<<endl;


     cout<<"Enter number for Operation : ";
    cin>>Opnum;
    cout<<endl;
 switch (Opnum)
 {
 case 1:{ int Pnum, repeat = 0,copy;

    cout << "Enter a number to check Palindrome : ";
    cin >> Pnum;
     copy= Pnum;
    while (Pnum != 0) {
        repeat = repeat * 10 + Pnum % 10; 
        Pnum /= 10;                                       
    }
    
    if(repeat==copy){
        cout<<"Your enterd number is Palindrome";
    }else{
        cout<<"Your enterd number is not a Palindrome";
    }
    cout<<endl<<endl;
    }
    break;
    case 2: { int Fnum;
    cout<<"Enter a Number to print Fibonacci Serises : ";
    cin>>Fnum;
    int numx = 2;
    int num1=2;
    int num2 =3;
    cout<<"1"<<endl<<"2"<<endl;
    while(num1<Fnum){
      ++num1;
         cout<<num2<<endl;
       num2=num2+numx;
       numx=num2-numx;   
}
cout<<endl<<endl;
}
    break;
 case 3: {
     int Prnum;

    cout << "Enter a number to check Prime or Not: ";
    cin >> Prnum;

    if (Prnum <= 1) {
        cout << Prnum << " is not a prime number." << endl;
    } else {
        int divisor = 0;

        for (int i = 2; i <= Prnum / 2; ++i) {
            if (Prnum % i == 0) {
                divisor = 1; 
                break;            
            }
        }

        if (divisor == 0) {
            cout << Prnum << " is a prime number." << endl;
        } else {
            cout << Prnum << " is not a prime number." << endl;
        }
    }
    cout<<endl<<endl;
 }
    break;
 case 4 : exit=true;
    break;
 
 default: cout<<"Enter a valid number for operation"<<endl<<endl;
    break;
 }

 if(exit == true){
    break;
      }
   }
    return 0;
}