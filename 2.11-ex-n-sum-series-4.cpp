#include <iostream>
using namespace std;
int main(){
  int n, sum=0;
  cout<<"Enter n"<<endl;
  cin>>n;
  for(int i = 0; i < n; i++){
    sum = sum + (i+1)*(n-i);
  }
  cout<<"The sum of the "<<n<<"th series is: "<<sum<<endl;
  return 0;
}
