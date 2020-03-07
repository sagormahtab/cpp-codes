#include <iostream>
#include <cmath>
using namespace std;
int main(){
  double x1, x2, y1, y2, result;
  cout<<"Enter the first co-ordinate: ";
  cin>>x1>>y1;
  cout<<endl;

  cout<<"Enter the second co-ordinate: ";
  cin>>x2>>y2;
  cout<<endl;

  result = abs(sqrt(pow((x2-x1),2) + pow((y2-y1),2)));
  cout<<"The distance between two points is: ";
  printf("%4.2lf\n", result);
  return 0;
}
