#include <iostream>
using namespace std;
int main(){
    char Letter;
    cout<<"Enter a character : ";
    cin>>Letter;
    if(Letter>='a' && Letter<='z'){
        cout<<"Entered Letter is Lowercase";
    }else{
        cout<<"Entered Letter is Uppercase";
    }
    return 0;
}