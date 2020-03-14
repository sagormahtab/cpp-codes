#include <iostream>
using namespace std;

int findFactorial(int n){
  int factorial = 1;
  for(int i = 1; i <=n; i++){
    factorial *= i;
  }
  return factorial;
}

int main(){
  int n, r, result;
  cout<<"Enter the value of n"<<endl;
  cin>>n;
  cout<<"Enter the value of r"<<endl;
  cin>>r;

  result = findFactorial(n)/(findFactorial(r)*findFactorial(n-r));
  cout<<"The result is : "<<result;

  return 0;
}
