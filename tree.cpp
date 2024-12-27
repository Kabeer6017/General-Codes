#include <iostream>
using namespace std;
int main() {
    int height = 6;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5-i;j++){
            cout<<" ";
        }
        for(int j= 1;j<=n; j++){
            cout<<"*";
        }
        for(int j=1; j<=n-1; j++){
            cout<<"*";

        }
        cout<<endl;
    }
    for(int i =1; i<=5; i++){
        for(int j=1; j<=i-1+1;j++){
             cout<<" ";
        }
        for(int j=1; j<=4-i; j++){
            cout<<"*";
        }
        for (int j=1 ; j<=3-i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
