#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x;
    string s,s2,dump;
    cin >> t;
    getline(cin,dump);
    while(t--)
    {
        s2="";
        getline(cin,s);
        n=s.size();
        x=floor(sqrt(n));
        if(x*x != n) cout << "INVALID" << endl;

       // cout << x << " "<< n<< endl;
       else
       {
          for(int i=0; i<sqrt(n); i++)
          {
              for(int k=i; k<n; k+=sqrt(n))
              {
                  s2+=s[k];
              }
          }
          cout << s2 << endl;
       }

    }
}
