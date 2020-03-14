#include <iostream>
using namespace std;
int main(){
  int a,b,c;
  cin>>a>>b>>c;
  if(a>b && a>c){
    cout<<a<<" is the biggest number";
  }
  else{
    if(b>c)
      cout<<b<<" is the biggest nubmer";
    else
      cout<<c<<" is the biggest number";
  }
  return 0;
}
