#include <iostream>
#include <cmath>
using namespace std;
int main(){
  double PI,r,perimeter;
  cout<<"Enter the radius of a circle"<<endl;
  cin>>r;
  PI = acos(-1.);
  perimeter = 2  * PI * r;
  cout<<"The perimeter of the circle is: "<<perimeter<<endl;
  return 0;
}
