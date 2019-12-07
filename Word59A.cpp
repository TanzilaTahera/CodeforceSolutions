#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int cnt,count;
    while(cin>>s)
    {
        cnt = 0;
        count = 0;
        for(int i=0;i<s.size();i++)
        {
            if(islower(s[i]))
                cnt++;
            else
            count++;
        }
        for(int i = 0; i<s.size();i++)
        {
            if(count>cnt)
                s[i]=toupper(s[i]);
            else
                s[i]=tolower(s[i]);
        }
        cout<<s<<endl;
    }
    return 0;
}
