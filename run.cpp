#include <iostream>
using namespace std;
int main(){
    int x;
    cout<<"Welcome to Mathematica"<<endl<<endl;
    cout<<"1. Check Palindrome";
    cout<<endl;
    cout<<"2. Print Fibonacci Series";
    cout<<endl;
    cout<<"3. Check Prime Number";
    cout<<endl;
    cout<<"4. Exit";
    cout<<endl;
    cout<<endl;
 cout<<"Please enter: ";
    cin>>x; 



    switch(x)
    {
    case 1: {
        int n;
        int repeat;
        int copy;
        cout<<"Enter a number for Palindrome: ";
        cin>>n;
        copy = n;
        cout<<endl;
        while(n>0){
            repeat = 10 * repeat + n % 10;
            n = n / 10 ;
        }
        if (repeat == copy){
            cout<<"Your number is Palindrome";
        }else{
            cout<<"Your number is not a Palindrome";
        }
    }
    case 2: {
        int a=1;
        int b= 2;
        int p;
        cout<<"Enter a number to print Fibonacci series : ";
        cin>>p;

        
        if (p==1){
 cout<<"0 ";
        }else if(p == 2){
 cout<<"0 1 ";
        }else if( p == 3){
               cout<<"0 1 1 ";
        }else if(p<=0){
            cout<<"Enter a Valid number";
        }
        else{
             cout<<"0 1 1 ";
        for(int i= 4; i<=p; i++){
            cout<<b<<" ";
            b = b +a;
            a = b-a;
            
        }
        }
    }

    case 3 :{
        int o;
        bool isPrime = true;
        cout<<"Enter a number to check prime number";
        cin>>o;
        if(o<=1){
            isPrime = false;
        }else{
            for(int i =1 ; i<= o/2; i++){
                if(o%i==0){
                    isPrime = false;
                }else{
                    isPrime= true;
                }

            }
            if (isPrime){
                cout<<"Prime number";

            }else{
                cout<<"not";
            }
        }

    }
    }
}