#include <iostream>
#include <cmath>
using namespace std;
int main(){
  int result;
  double num;
  cout<<"Enter your number: "<<endl;
  cin>>num;
  result = round(sqrt(num));
  cout<<"The square root of the number is: "<<result;
  return 0;
}
