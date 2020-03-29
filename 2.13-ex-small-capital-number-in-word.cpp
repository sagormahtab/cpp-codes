#include <iostream>
#include <cstring>
using namespace std;
int main(){
  int smallCount=0,capCount=0;
  char a[40];
  cout<<"Enter a sentence"<<endl;
  gets(a);
  for(int i = 0; i < strlen(a); i++){
    if('a'<= a[i] && a[i] <= 'z')
      smallCount++;
    else if('A' <= a[i] && a[i] <= 'Z')
      capCount++;
    else
      continue;
  }
  cout<<"There are "<<smallCount<<" small letter and "<<capCount<<" capital letter in the sentence";
  return 0;
}
