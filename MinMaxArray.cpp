#include <iostream>
using namespace std ;
int main(){
    
    int num [6]={10,2,5,14,3,0};
    int size = 6;
    int small= INT_MAX;

    for(int i = 0; i<size ;i++){
        if(num[i]<small){
            small = num[i];
        }

    }

    cout << small;

    return 0;
}