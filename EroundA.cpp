#include<iostream>
using namespace std;
int main()
{
    int t, m, p,q,max,sum;
    cin>>t;
    while(t--)
    {
        sum=0;
        max=0;
        cin>>m;
        while(m--)
        {
            cin>>p>>q;
            sum+=q-p;
            if(sum>max)
                max=sum;
        }
        cout<<max<<endl;
    }
    return 0;
}
