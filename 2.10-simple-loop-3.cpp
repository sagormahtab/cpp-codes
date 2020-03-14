#include <iostream>
#include <cstdio>
using namespace std;
int main(){
  int i,a;
  //odd numbers from 1 to 10
  for(i = 1; i <= 10; i++)
  {
    if(i % 2 == 0) continue;
    cout<<i<<endl;
  }
  //print only 1, 2 and 3
  for(i = 1; i <= 10; i++)
  {
    if(i > 3) break;
    cout<<i<<endl;
  }
  //take input while it is not End of File
  while(scanf("%d", &a) != EOF){
    if(a == 0)
      break;
    cout<<a<<endl;
  }

  //or in short
  while(scanf("%d", &a) != EOF && a){
    cout<<a<<endl;
  }
  return 0;
}
