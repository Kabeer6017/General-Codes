#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number : ";
    cin>>n;
    int x = 2;
    int i=2;
    int j =3;
    cout<<"1"<<endl<<"2"<<endl;
    while(i<n){
      ++i;
         cout<<j<<endl;
       j=j+x;
       x=j-x;   
}
} 