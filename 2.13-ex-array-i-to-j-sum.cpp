#include <iostream>
using namespace std;
int main(){
  int n, i, j, sum;
  int array[10] = {12, 35, 64, 18, 43, 81, 24, 57, 7, 71};
  cout<<"How many questions will you ask?";
  cin>>n;
  for(int k = 0; k < n; k++){
    cout<<"Enter the ith position "<<endl;
    cin>>i;
    cout<<"Enter the jth position"<<endl;
    cin>>j;
    sum = 0;
    for(int l = i; l <= j; l++)
      sum = sum + array[l];

    cout<<"The sum is: "<<sum<<endl;
  }
  return 0;
}
