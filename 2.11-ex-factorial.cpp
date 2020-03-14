#include <iostream>
using namespace std;
int main(){
  int n, factorial = 1;
  cout<<"Enter your number"<<endl;
  cin>>n;
  for(int i = 1; i <=n; i++){
    factorial *= i;
  }
  cout<<"The factorial of the number "<<n<<" is "<<factorial<<endl;
  return 0;
}
