#include<bits/stdc++.h>
using namespace std;
long int a[1000000];
int main()
{
    long int n,b,d,sum,cnt;
    while(cin >> n >> b >> d)
    {
        memset(a,0,sizeof a);
        sum=0; cnt=0;
        for(int i=0; i<n ;i++)
        {
            cin >> a[i];
            if(a[i]<=b)
            {
                sum+=a[i];
                if(sum>d)
                {
                    sum=0;
                    cnt++;
                }
            }

        }
        cout << cnt << endl;
    }
    return 0;
}
