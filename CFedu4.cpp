#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,k,n;
    string s,ss[100];
    cin>>n>>a>>b>>s;

        if(n%a == 0 || n%b == 0 || a+b == n|| (n%a)%b == 0 || (n%b)%a == 0)
        {
            k=0;
            if(n%a == 0)
            {
                cout<<n/a<<endl;
                for(int i=0; i<n; i++)
                {
                    if((i+1)%a == 0 )
                    {
                        ss[k]+=s[i];
                        k++;
                    }
                    else
                    ss[k]+=s[i];
                }
            }
            else if(n%b == 0)
            {
                cout<<n/b<<endl;
                 for(int i=0;i<n;i++)
                {
                    if((i+1)%b == 0 )
                    {
                        ss[k]+=s[i];
                        k++;
                    }
                    else
                    ss[k]+=s[i];
                }
            }
            else if(a+b == n)
            {
                cout<<2<<endl;
                 for(int i=0; i<n; i++)
                {
                    if(i==a-1)
                    {
                        ss[k]+=s[i];
                        k++;
                    }
                    else
                    ss[k]+=s[i];
                }
            }
            else if((n%a)%b == 0)
            {

            }
            else if((n%b)%a == 0)
            {
                cout<<(n/b)+(n%b)%a<<endl;
                for(int i=0; i<n; i++)
                {
                    if(i==a-1)
                    {
                        ss[k]+=s[i];
                        k++;
                    }
                    else
                    ss[k]+=s[i];
                }
            }

            for(int i=0; i<k+1; i++)
            {
                cout<<ss[i]<<endl;
            }

        }
        else
            cout<<-1<<endl;

    return 0;
}
