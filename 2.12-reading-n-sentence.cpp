#include <iostream>
using namespace std;
int main(){
  char sentence[5][100];
  for(int i = 0; i < 5; i++)
    gets(sentence[i]);
  for(int i = 0; i < 5; i++)
    puts(sentence[i]);
  return 0;
}
