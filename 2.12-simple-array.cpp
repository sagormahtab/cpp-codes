#include <iostream>
using namespace std;
int main(){
  int a[10], id;
  for(int i = 0; i < 10; i++)
    a[i] = 0;
  for(int i = 0; i < 10; i++){
    //the player is giving correct answer
    cin>>id;
    //increment players point
    a[id - 1]++;
  }

  //initializing max score
  int maximum_score = 0;
  for( int i = 0; i < 10; i++){
    //if ith player's score is more than max
    if(maximum_score < a[i])
      //set max score to this value
      maximum_score = a[i];
  }
  
  cout<<"Winners are: "<<endl;
  for(int i = 0; i < 10; i++)
    //if ith players score is the maximum
    if(maximum_score == a[i])
      //print his id
      cout<<i+1<<"\t";

  return 0;
}
