#include <iostream>
using namespace std;
int main(){
  int n,result;
  cin>>n;
  result = (n*(n+1)*(n+2))/6;
  cout<<"The sum of the "<<n<<"th position of the series is: "<<result;
  return 0;
}
