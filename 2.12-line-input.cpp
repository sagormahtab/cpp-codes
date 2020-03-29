#include <iostream>
using namespace std;
int main(){
  char a[50], b[30];
  //normal input
  cin>>a;
  cout<<a<<endl;
  //dummy gets -> for avoiding conflict
  gets(b);
  //string input
  gets(b);
  cout<<b<<endl;
  return 0;
}
