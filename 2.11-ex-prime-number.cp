#include <iostream>
using namespace std;
int main(){
  int n, factor=0;
  cout<<"Enter your number"<<endl;
  cin>>n;
  for(int i = 2; i <= n/2; i++){
    if(n % i == 0)
      factor++;
  }

  if(factor == 0)
    cout<<"The number "<<n<<" is a prime number";
  else
    cout<<"The number "<<n<<" is not a prime number";

  return 0;
}
