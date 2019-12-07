#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,a[5001],val,sum,cnt;
    while(cin >> n >> k)
    {
        cnt=0;
        cin >> a[0];
        sum=a[0];
        for(int i=1; i<n; i++)
        {
            cin >> a[i];
            if(a[i]+a[i-1]>=k) cnt++;
            sum+=a[i];
        }
        if(cnt==n-1) val=0;
        else if(n%2!=0 && k%2==0) val=((((n-1)/2)*k)+(k/2))-sum-1;
        else if(n%2!=0)
        {
            val=((((n-1)/2)*k)+(k/2))-sum;
           // cout << "val "<<val << " sum " <<sum << " (n-1)/2 " << (n-1)/2 << endl;
        }
        else val=((n/2)*k)-sum;
        cout << val << endl;
        cout << a[0] <<" ";
        for(int i=1; i<n; i++)
        {
            if(a[i]+a[i-1]<k)
                a[i]=k-a[i-1];
            if(i==n-1) cout << a[i] << endl;
            else cout << a[i] <<" ";
        }

    }
    return 0;
}
