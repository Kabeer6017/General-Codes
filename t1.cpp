#include <iostream>
using namespace std;
int main(){
    int a =1;
   int sum = 0;
   int i=-1;
   cout<<"Enter the Series"<<endl;
while(a!=0){
    i++;
    cin>>a;
    sum= sum+a;

}
int avg = sum/i;
cout<<endl;
cout<<"Average of your given series = "<<avg;
}