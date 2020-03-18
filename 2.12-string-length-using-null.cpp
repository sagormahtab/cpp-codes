#include <iostream>
using namespace std;
int main(){
  char a[50];
  int i;
  cout<<"Enter a string"<<endl;
  gets(a);
  for(i = 1; a[i] != '\0'; i++);
  cout<<i;
  return 0;
}
