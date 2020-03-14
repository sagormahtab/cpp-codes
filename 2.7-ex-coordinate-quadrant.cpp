#include <iostream>
using namespace std;
int main(){
  double x,y;
  cout<<"Enter your coordinate"<<endl;
  cin>>x>>y;
  if(x>0 && y>0)
    cout<<"The coordinate is in first quadrant"<<endl;
  else if(x<0 && y>0)
    cout<<"The coordinate is in the second quadrant"<<endl;
  else if(x<0 && y<0)
    cout<<"The coordinate is in the third quadrant"<<endl;
  else if(x>0 && y<0)
    cout<<"The coordinate is in the fourth quadrant"<<endl;
  else
    cout<<"The coordinate is in the axis line"<<endl;
  return 0;
}
