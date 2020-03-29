#include <iostream>
#include <cstring>
using namespace std;
int main(){
  char sequence[40] = "1011001110001001111010110011111001011";
  int count=0, max=0;
  for(int i = 0; i < strlen(sequence); i++){
    if(sequence[i] == '1'){
      count++;
      if(count>max)
        max = count;
    }
    else{
      count = 0;
    }
  }
  cout<<"Max number of repeated 1 is: "<<max<<endl;
  return 0;
}
