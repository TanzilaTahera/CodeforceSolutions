#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
  double i,x,S,sum=0;
  S=1;
  x=2;
  for(i=3;i<=39;i+=2)
  {
      sum=i/x;
      S=sum+S;
      x*=2;
  }
  cout<<fixed<<setprecision(2)<<S<<endl;
    return 0;
}
