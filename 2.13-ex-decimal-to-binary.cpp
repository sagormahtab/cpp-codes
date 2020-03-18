#include <iostream>
using namespace std;
int main(){
  int number,  remainder[40], count=-1;
  cout<<"Enter a decimal number: ";
  cin>>number;
  for(int i = 0; number != 0; i++){
    remainder[i] = number % 2;
    number /= 2;
    count++;
  }
  for(int i = count; i > -1; i--)
    cout<<remainder[i];

  return 0;
}
