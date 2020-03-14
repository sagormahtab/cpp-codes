#include <iostream>
using namespace std;
int main(){
  //how many 2 divides 100
  int x = 100, cnt = 0;
  while (x % 2 == 0) {
    x = x / 2;
    cnt++;
  }
  cout<<cnt<<endl;
  //highest number which is power of 2 and less than 1000
  x = 1;
  while(x*2 < 1000)
    x *= 2;
  cout<<x<<endl;
  for(x = 1; x * 2 <1000; x*=2);
  cout<<x<<endl;
  return 0;
}
