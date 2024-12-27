#include <iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int k =0;
    cout<<x;
    cout<<" "<<x*3+1;
    while(x!=1){
if(x%2==0){
    x=x/2;
}else{
    x=x*3+1;
}
cout<<" "<<x;
++k;
    }
    cout<<endl;
    cout<<"k = "<<k;
}