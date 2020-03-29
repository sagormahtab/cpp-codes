#include <iostream>
#include <cstring>
using namespace std;
int main(){
  char a[40],b[40];
  cout<<"Enter a word"<<endl;
  cin>>a;
  cout<<"Enter another word"<<endl;
  cin>>b;
  strcat(a,b);
  cout<<"The concatenated string is: "<<a<<endl;
  return 0;
}
