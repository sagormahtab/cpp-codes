#include <iostream>
#include <cstring>
using namespace std;
int main(){
  char first[40],second[40];
  cout<<"Enter the first string"<<endl;
  gets(first);
  cout<<"Enter the second string"<<endl;
  gets(second);

  if(strcmp(first, second) > 0)
    cout<<"The second string is lexicographically smaller"<<endl;
  else if(strcmp(first, second) < 0)
    cout<<"The first string is lexicographically smaller"<<endl;
  else
    cout<<"The first and second string are lexicographically same"<<endl;

  //without library function
  for(int i = 0; first[i] != '\0'; i++){
    for(int j=0; second[i] != '\0'; j++){
      while(first[i]!='\0' && second[j]!='\0' && first[i] == second[i]){
        i++;
        j++;
      }
      if(first[i] > second[j]){
        cout<<"The second string is lexicographically smaller"<<endl;
        exit(0);
      }
      else if(first[i] < second[j]){
        cout<<"The first string is lexicographically smaller"<<endl;
        exit(0);
      }
      else{
        cout<<"The first and second string are lexicographically same"<<endl;
      }
    }
  }
  return 0;
}
