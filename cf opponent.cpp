#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,total,cnt[100],k,mx;
    string s;
    while(cin >> n >> p)
    {
        total=0; k=0; mx=0;
        while(p--)
        {
            memset(cnt,0,sizeof cnt);
            cin >> s;
            for(int i=0; i<n; i++)
            {
                if(s[i]=='1') cnt[k]++;
                //cout << cnt << endl;
            }
            if(k==0 && cnt[k] < n) total++;
            else if(cnt[k] < n && cnt[k-1] < n)
                total++;
                //if(total>mx) mx=total;
            else total=0;
            if(total>mx) mx=total;

            k++;
        }

        cout << mx << endl;
    }
    return 0;
}
