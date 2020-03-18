#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
int main(){
  char number[40];
  int i, decimal=0, item, length,position;
  cout<<"Enter a binary number: ";
  cin>>number;
  length = strlen(number);
  position = length;
  for(i = 0; i < length; i++){
    position -= 1;
    item = number[i] - '0';
    item *= pow(2,position);
    decimal += item;
  }
  cout<<"The nubmer in decimal is: "<<decimal<<endl;
  return 0;
}
