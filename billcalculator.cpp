#include <iostream>
using namespace std;
int main(){
    double n;
    cout<<"Enter the units consumed : ";
    cin>>n;
    double bill=0;
    double x=n-50;
    if(x>=0){
       bill+=25;
       double y=x-100;
        if(y>=0){

            bill+=75;

            double z=y-100;

        if(z>=0){

            bill+=120;
               double w=n-250;
               if(w>=0){
                bill=bill+(w*1.5);
               }
        }
        else{

            bill=bill+(y*1.20);
        }
        }else{
            bill=bill+(x*0.75);
        }
    }else{
        bill=n*0.50;
    }
   double sur= bill+bill * 0.20;
   cout<<"Bill Without surcharge = "<<bill<<endl;
   cout<<"Bill with surcharge = "<<sur;
}