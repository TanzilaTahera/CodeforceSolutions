#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt;
    string s;
    while(cin >> n >> s)
    {
        cnt=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='<') cnt++;
            else break;
        }
        for(int i=n-1; i>=0; i--)
        {
            if(s[i]=='>') cnt++;
            else break;
        }

        cout << cnt << endl;
    }
    return 0;
}
