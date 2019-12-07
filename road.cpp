#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,m,nn[1000],x;
    while( cin >> n >> m)
    {
        for(int i=0; i<n; i++) nn[i]=0;
        while(m--)
        {
            cin >> a >> b;
            nn[a-1] = 1;
            nn[b-1] = 1;
        }

        for(int i=0; i<n; i++)
            if(nn[i] == 0)
            {
                x=i+1; break;
            }

        cout << n-1 <<endl;

        for( int i=1; i<=n; i++)
        {
            if (i==x) continue;

            else cout << x << " " << i << endl;
        }
    }
    return 0;
}
