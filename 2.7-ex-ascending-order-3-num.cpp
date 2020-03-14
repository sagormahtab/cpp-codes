#include <iostream>
using namespace std;

void biggestOfTwo(int num1, int num2){
  if(num1<num2){
    cout<<num1<<endl;
    cout<<num2<<endl;
  }
  else{
    cout<<num2<<endl;
    cout<<num1<<endl;
  }
}

int main(){
  int a,b,c;
  cin>>a>>b>>c;
  if(a<b && a<c){
    cout<<a<<endl;
    biggestOfTwo(b,c);
  }
  else{
    if(b<c){
      cout<<b<<endl;
      biggestOfTwo(a,c);
    }
    else{
      cout<<c<<endl;
      biggestOfTwo(a,b);
    }
  }
  return 0;
}
