#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n,cnt[5],ans,x;
    while(cin >> s)
    {
        n=s.size();
        cnt[0]=0; cnt[1]=0; cnt[2]=0; cnt[3]=0;
        if(n%2!=0) cout << -1 << endl;//ans=-1;

        else
        {
            for(int i=0; i<n; i++)
            {
                if(s[i]=='R') cnt[0]++;
                else if(s[i]=='L') cnt[1]++;
                else if(s[i]=='U') cnt[2]++;
                else if(s[i]=='D') cnt[3]++;
            }
            x=max(cnt[0],cnt[1]);
            y=max(cnt[2],cnt[3]);
            z=max(x,y);

        }
    }
}
