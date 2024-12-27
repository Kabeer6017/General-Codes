#include <iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Input the Status Charater : ";
    cin>>ch;
    if(ch=='s' || ch=='S'){
        cout<<"You are a Senior Salesperson Your Salary is Rs.400";
    }else if(ch=='j' || ch=='J'){
        cout<<"You are a Junior Salesperson Your Salary is Rs.275";
    }else{
        cout<<"Error!! input a valid status charater";
    }
    return 0;
}