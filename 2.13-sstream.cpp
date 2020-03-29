#include <iostream>
#include <sstream>
#include <string>

using namespace std;
int main(){
  char line[100];
  string S; // string from stl
  gets(line); // input the line

  //create an istringstream from the input line
  istringstream iS(line);
  while(iS >> S)
  {
    cout<<S<<"\n";
  }
  return 0;
}
