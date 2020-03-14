#include <iostream>
#include <cmath>
using namespace std;
int main(){
  int n, sum=0;
  cout<<"Enter n"<<endl;
  cin>>n;
  for(int i = 1; i <= n; i++){
    if(i % 2 == 0)
      i *= (-1);
    sum += i;
    i = fabs(i);
  }
  cout<<"The sum of the "<<n<<"th series is: "<<sum<<endl;
  return 0;
}
