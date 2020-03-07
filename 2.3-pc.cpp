#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main(){
  double r, area, pi;
  cin>>r;

  pi = acos(-1.);
  area = pi*r*r;

  printf("%lf\n", area);
  return 0;
}
