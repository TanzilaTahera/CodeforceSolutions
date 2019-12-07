#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,a,odd[1000],sum,k;
    while(cin>>n)
    {
        sum=0;
        k=0;
        for(int i = 1 ;i <= n; i++)
        {
            cin>>a;
            sum+=a;
            if(a%2!=0)
            {
                odd[k]=a;
                k++;
            }
        }

        if(sum%2==0)
            cout<<sum<<endl;
        else
        {
            sort(odd,odd+n);
            //cout<<odd[0]<<" "<<sum<<endl;
            cout<<sum-odd[0]<<endl;
        }
    }
    return 0;
}
