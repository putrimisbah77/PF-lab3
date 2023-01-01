#include <iostream>
using namespace std;
main(){
int bits=0;
double byt;
double kb;
double mb;

cout<<"Enter bits: " <<bits;
cin>>bits;
byt=bits*0.125;
kb=bits*0.0001220;
mb=bits*0.00000001191;
cout<<bits <<"is equal to: " <<byt;
cout<<endl;
cout<<bits <<"is equal to: " <<kb;
cout<<endl;
cout<<bits <<"is equal to: " <<mb;

}