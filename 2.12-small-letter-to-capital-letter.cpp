#include <iostream>
using namespace std;
int main(){
  char ch;
  cout<<"Enter a small letter"<<endl;
  cin>>ch;
  ch = ch - 'a' + 'A';
  cout<<"The letter in Capital is "<<ch<<endl;
  cout<<"Enter a capital letter"<<endl;
  cin>>ch;
  ch = ch - 'A' + 'a';
  cout<<"The letter in small letter is "<<ch<<endl;
  return 0;
}
