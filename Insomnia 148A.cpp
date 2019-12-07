#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,l,m,n,d,val[100000],cnt;
    while( cin >> k >> l >> m >> n >> d )
    {
        for(int i=1; i<=d; i++) val[i]=0;
        cnt = 0;
        for(int i=1; i<=d; i++)
        {
            if(i%k == 0) val[i]=1;
            if(i%l == 0) val[i]=1;
            if(i%m == 0) val[i]=1;
            if(i%n == 0) val[i]=1;
            if(val[i]==1) cnt++;
        }

        cout << cnt << endl;
    }

    return 0;
}
