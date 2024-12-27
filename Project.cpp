#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    if(1<=n && n<=50){
        cout<<n*0.25;
    }else if (51<=n && n<=150){
         cout<<n*0.5;
    } else if(151<=n && n<=250){
        cout<<n*0.75;
    }
}
