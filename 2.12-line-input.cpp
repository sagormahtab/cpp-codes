#include <iostream>
using namespace std;
int main(){
  char a[50];
  //normal input
  cin>>a;
  cout<<a<<endl;
  //dummy gets -> for avoiding conflict
  gets(a);
  //string input
  gets(a);
  cout<<a<<endl;
  return 0;
}
