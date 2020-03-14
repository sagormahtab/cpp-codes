#include <iostream>
using namespace std;

int reverseNumber(int number){
  int remainder, rev=0;
  while(number != 0){
    remainder = number % 10;
    rev = rev*10 + remainder;
    number /= 10;
  }
  return rev;
}

int main(){
  int n, number=0, rev,count=0;
  cin>>n;
  while (n != count) {
    number++;
    rev = reverseNumber(number);
    if(number == rev)
      count++;
  }
  cout<<"The "<<n<<"th pallindrome is: "<<number;
  return 0;
}
