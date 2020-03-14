#include <iostream>
#include <cmath>
using namespace std;
int main(){
  int n, result;
  cout<<"Enter n"<<endl;
  cin>>n;
  result = (0.125)*n*((n+1)*(n*n+n+2));
  cout<<"The sum of the "<<n<<"th series is "<<result<<endl;
  return 0;
}
