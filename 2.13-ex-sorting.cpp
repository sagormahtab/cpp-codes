#include <iostream>
using namespace std;
int main(){
  int numbers[9] = {12, 3, 2, 14, 8, 27, 29, 8, 11}, temp;
  for(int i = 0; i < 9; i++){
    for(int j = 0; j < 9; j++){
      if(numbers[i]<numbers[j]){
        //swapping
        temp = numbers[i];
        numbers[i] = numbers[j];
        numbers[j] = temp;
      }
    }
  }
  cout<<"The sorted array is: "<<endl;
  for(int i = 0; i < 8; i++)
    cout<<numbers[i]<<"\t";
  return 0;
}
