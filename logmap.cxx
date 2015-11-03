#include <iostream>
using namespace std;
int main()
{
  int N=100;
  double x0=0.5;
  double r=1;
  
  
  
  for(r=0.01; r<4; r+=0.01)
  { 
    double x=x0;
    for(int i=0; i<100; i++)
    {
      x= x*r*(1-x);
      cout << r << " " << x<< endl;
    }
  }
  
  return 0;
}
 