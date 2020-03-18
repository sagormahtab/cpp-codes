#include <iostream>
using namespace std;
int main(){
  char ch;
  cout<<"Enter a character"<<endl;
  cin>>ch;
  if('a' <= ch && ch <= 'z')//single quotation gives the ASCII value of a character
    cout<<ch<<" is a small letter";
  else if('A' <= ch && ch <= 'Z')
    cout<<ch<<" is a capital letter";
  else if('0' <= ch && ch <= '9')
    cout<<ch<<" is a number";
  else
    cout<<ch<<" is a special character";
  return 0;
}
