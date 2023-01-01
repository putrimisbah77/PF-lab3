#include <iostream>
using namespace std;
main(){

int matric;
int fsc;
int ecat;
float aggregate;
double matricper=0;
double fscper=0;
double ecatper=0;



cout<<"Enter your matric marks: " ;
cin>>matric;
cout<<"Enter your  fsc marks: ";
cin>>fsc;
cout<<"Enter your ecat marks: ";
cin>>ecat;
matricper= matric*0.045 ;
cout<<"Matric= " <<matricper <<endl;
fscper= fsc*0.036;
cout<<"intermediat= " <<fscper <<endl;
ecatper= ecat*0.025;
cout<<"Ecat= " <<ecatper <<endl;
aggregate= fscper + ecatper + matricper;

cout<<"your aggregate is: " <<aggregate;


}