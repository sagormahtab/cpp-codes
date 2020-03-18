#include <iostream>
using namespace std;
int main(){
  char sentence[50] = "Concrete mathematics is a nice advanced math book";
  char words[8][15];
  int k=0,j;

  for(int i = 0; i < 8; i++){
    j = -1;
    while(sentence[k] != '\0'){
      if(sentence[k] != ' '){
        j++;
        words[i][j] = sentence[k];
        k++;
      }
      else{
        j++;
        words[i][j] = '\0';
        k++;
        break;
      }
    }
  }

  for(int i = 0; i < 8; i++)
    cout<<words[i]<<endl;
  return 0;
}
