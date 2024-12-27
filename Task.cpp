#include <iostream>
using namespace std;
int mint(){
    int n;
    int fact=0;
    cin>>n;
    for(int i =1;i<=n;i++){
        fact= n * (n-1);
        n= n - 1;
        
    }
    cout<<fact;
    return 0;
}