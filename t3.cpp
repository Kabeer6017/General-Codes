#include <iostream>
using namespace std;
int main(){
    int Pa, Pb;
    int Ra, Rb;
    cout<<"Enter the Population of Town A : ";
    cin>>Pa;
    cout<<"Enter the Population of Town B : ";
    cin>>Pb;
    cout<<"Enter the Grouth Rate of Town A : ";
    cin>>Ra;
    cout<<"Enter the Grouth Rate of Town B : ";
    cin>>Rb;
    int i=0;
while (Pa<Pb)
{
    i++;
    Pa = Pa *Ra;
    Pb= Pb *Rb;

}
cout<<"The population of A will be Greater then B in "<<i<<" years";
}