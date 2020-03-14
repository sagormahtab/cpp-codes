#include <iostream>
#include <cmath>
using namespace std;
int main(){
  double Ax,Bx,Cx,Ay,By,Cy,area;
  cout<<"Enter the first vertex of the triangle: "<<endl;
  cin>>Ax>>Ay;
  cout<<"Enter the second vertex of the triangle: "<<endl;
  cin>>Bx>>By;
  cout<<"Enter the third vertex of the triangle: "<<endl;
  cin>>Cx>>Cy;

  area = fabs((Ax*(By - Cy) + Bx*(Cy - Ay) + Cx*(Ay - By))/2.0);
  cout<<"The area of the triangle is: "<<area;
  return 0;
}
