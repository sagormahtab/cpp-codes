#include <iostream>
using namespace std;
int main(){
  int n, result;
  cout<<"Enter n"<<endl;
  cin>>n;
  result = (n*(n+1)*(2*n+1))/6;
  cout<<"The sum of the series is: "<<result<<endl;
  return 0;
}
