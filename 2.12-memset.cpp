#include <iostream>
#include <cstring>
using namespace std;
int main(){
  int a[5];
  //works fine with 0 or -1
  memset(a, 0, sizeof(a));
  for(int i = 0; i < 5; i++)
    cout<<a[i]<<"\t";

  cout<<endl;

  //conflicts with 1
  memset(a, 1, sizeof(a));
  for(int i = 0; i < 5; i++)
    cout<<a[i]<<"\t";
  return 0;
}
