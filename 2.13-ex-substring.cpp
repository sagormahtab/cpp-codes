#include <iostream>
using namespace std;
int main(){
  int i, j, temp=0;
  char string[40], substring[40];
  cout<<"Enter the A string: "<<endl;
  gets(string);
  cout<<"Enter the B string: "<<endl;
  gets(substring);

  for(i = 0; string[i] != '\0'; i++){
    j = 0;
    if(string[i] == substring[j]){
      temp = i + 1;
      while (string[i]!='\0' &&substring[j]!='\0' &&string[i]==substring[j]) {
        i++;
        j++;
      }
      if(substring[j] == '\0'){
        cout<<"B is a substring of A"<<endl;
        exit(0);
      }
      else{
        i = temp;
        temp = 0;
      }
    }
  }
  if(temp == 0)
    cout<<"B is not a substring of A"<<endl;
  return 0;
}
