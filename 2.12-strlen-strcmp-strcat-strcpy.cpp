#include <iostream>
#include <cstring>
using namespace std;
int main(){
  char s1[45] = "Abey hala koi jaas";
  char s2[25] = "tore komu ken bhai wtf";
  //strlen
  cout<<"length of the first string is: "<<strlen(s1)<<", "<<"second: "<<strlen(s2)<<endl;
  //strcmp
  cout<<strcmp(s2, s1)<<endl;
  //strcat
  cout<<strcat(s1, s2)<<endl;
  //strcpy
  strcpy(s1, s2);
  cout<<"s1: "<<s1<<", s2: "<<s2<<endl;
  return 0;
}
