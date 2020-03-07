#include <iostream>
#include <cmath>
using namespace std;
int main(){
  double fs, ss, ts, s, result;
  cout<<"Enter the first side: ";
  cin>>fs;
  cout<<"Enter the second side: ";
  cin>>ss;
  cout<<"Enter the third side: ";
  cin>>ts;

  s = (fs + ss + ts)/2.0;
  result = sqrt(s*(s-fs)*(s-ss)*(s-ts));
  cout<<"The area is: "<<result;
  return 0;
}
