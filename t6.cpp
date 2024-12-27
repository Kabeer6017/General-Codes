#include <iostream>
using namespace std;
int main(){
    int a,m,i;
    cout<<"Enter the manintance : ";
    cin>>m;
    cout<<"Enter the Rent of all : ";
    cin>>a;
    cout<<"Enter the Increse rent : ";
    cin>>i;
     int y = a*50;
     int k =m*50;
     int p =y-k;
     int z= 50;
     int b=1;
     int s =0;
    while(s<=p){
        
        --z;
    int q = a*z;
     int w =m*z;
     int f =b*i;
     int s =q-w+f;
     b++;
     if(b==0){
        cout<<"Not posibvle the max Profit is when all are occupy = "<< p<<endl;
        break;
     }
    }
    cout<<b<<" units should be vacant"<<endl;
    cout<<"Max Profit : "<<s;
}