#include <iostream>
using namespace std;
int main(){
    int n,a,b;
    while(1==1){
        cout<<"Simple Operation Calculator"<<endl;
        cout<<"---------------------------"<<endl<<endl;
   cout<<"1. To perform Addtion"<<endl;
    cout<<"2. To perform Substration"<<endl;
    cout<<"3. To perform Division"<<endl;
    cout<<"4. To perform Multipication"<<endl;
    cout<<"5. To Exit"<<endl;
    cin>>n;
 
 if(n==1){
 cout<<"Enter first number : ";
 cin>>a;
 cout<<"Enter Second number : ";
 cin>>b;
int add = a+b;
cout<<"Addtion of your number : "<<add<<endl;
 }else if(n==2){
 cout<<"Enter first number : ";
 cin>>a;
 cout<<"Enter Second number : ";
 cin>>b;
int sub  = a-b;
cout<<"Substruction of your number : "<<sub<<endl;
 }else if(n==3){
 cout<<"Enter first number : ";
 cin>>a;
 cout<<"Enter Second number : ";
 cin>>b;
int div = a/b;
cout<<"Divison of your number : "<<div<<endl;
 }else if(n==4){
 cout<<"Enter first number : ";
 cin>>a;
 cout<<"Enter Second number : ";
 cin>>b;
int mul = a*b;
cout<<"Multiplication of your number : "<<mul<<endl;
 }else if(n==5){
break;
 }
 
    }
 return 0;
}