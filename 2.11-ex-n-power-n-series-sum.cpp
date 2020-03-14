#include <iostream>
#include <cmath>
using namespace std;
int main(){
  int n, result=0;
  cout<<"Enter n"<<endl;
  cin>>n;
  for(int i = 1; i <= n; i++){
    result += pow(i,i);
  }
  cout<<"The sum of the series is: "<<result<<endl;
  return 0;
}
