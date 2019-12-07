#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int cnt,n,sz;
    while(cin >> s)
    {
        cnt=0;
        sz=s.size();
        n=sz-1;
        //cout << s[n] << endl;
        for(int i=0 ;i<sz; i++)
        {
            if(s[i]!=s[n]) cnt++;
            n--;
        }
       // cout << cnt << endl;
        if(cnt==2) cout << "YES" << endl;
        else if(sz%2==1 && cnt==0) cout << "YES" << endl;
        else cout << "NO" << endl;
     }
     return 0;
}
