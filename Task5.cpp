#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
     cin>>n;
      int m =0;
     int i = 0;
    while(n>0){
        i++;
        m = n % 10;
        n = n/10;
       }
cout<<i;
return 0;
}