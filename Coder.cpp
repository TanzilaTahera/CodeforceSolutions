#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,i,k,x;
    char a[1000][1000];
    cin>>N;
    if(N%2==0)
    cout<<(N*N)/2<<endl;
    else
    cout<<((N*N)/2)+1<<endl;
    for(i=0;i<N;i++)
      for(k=0;k<N;k++)
        a[i][k]=0;

    for(i=0;i<N;i++)
      for(k=0;k<N;k++)
      {

          if((i%2==0 && k%2==0)||(i%2!=0 && k%2!=0))
            a[i][k]='C';
          else
            a[i][k]='.';

      }

    for(i=0;i<N;i++)
    {   if(i>0)
        cout<<endl;
      for(k=0;k<N;k++)
        cout<<a[i][k];

    }
    return 0;
}
