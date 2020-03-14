#include <iostream>
using namespace std;
int main(){
  //1 to 10
  for(int i = 1; i <= 10; i++)
    cout<<i<<endl;
  //10 to 1
  for(int i = 10; i >= 1; i--)
    cout<<i<<endl;
  //odd numbers from 1 to 10
  for(int i = 1; i <= 10; i +=2)
    cout<<i<<endl;

  int i = 5;
  //prints 10,12,14
  while(i <= 7){
    cout<<i*2<<endl;
    i++;
  }
  return 0;
}
