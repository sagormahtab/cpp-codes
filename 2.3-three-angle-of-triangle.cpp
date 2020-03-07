#include <iostream>
#include <cmath>
using namespace std;
int main(){
  double a,b,c,A,B,C,cosA,cosB,cosC,PI;
  cout<<"Enter the first side: ";
  cin>>a;
  cout<<"Enter the second side: ";
  cin>>b;
  cout<<"Enter the third side: ";
  cin>>c;

  PI = acos(1.);

  cosA = ((pow(b,2) + pow(c,2)) - pow(a,2))/(2*b*c); //those brackets surrounding 2*b*c are very important
  cosB = ((pow(c,2) + pow(a,2)) - pow(b,2))/(2*c*a); //was stucked for about an hour just because of brackets
  cosC = ((pow(a,2) + pow(b,2)) - pow(c,2))/(2*a*b); //if we don't give bracktes then the pow expression is divided by 2 only

  A = acos(cosA)*180/PI ; //acos() only works between -1<=x<=1
  B = acos(cosB)*180/PI; //if brackest are not given perfectly the value can be very large
  C = acos(cosC)*180/PI; //have multiplied with 180 and divided by PI to convert the radian value to degree

  cout<<"The first angle is "<<A<<" degree"<<endl;
  cout<<"The second angle is "<<B<<" degree"<<endl;
  cout<<"The third angle is "<<C<<" degree"<<endl;
  return 0;
}
