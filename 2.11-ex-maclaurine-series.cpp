#include <iostream>
#include <cmath>
using namespace std;

int findFactorial(int n){
  int factorial = 1;
  for(int i = 1; i <=n; i++){
    factorial *= i;
  }
  return factorial;
}

int main(){
  int x, n, count=0, result=0;
  cout<<"Enter x"<<endl;
  cin>>x;
  cout<<"Enter n"<<endl;
  cin>>n;
  for(int i = 0; i < n; i++){
    result += (pow((-1),i) * pow(x,(2*i)))/findFactorial(2*i);
  }
  cout<<"The result is: "<<result<<endl;
  return 0;
}
