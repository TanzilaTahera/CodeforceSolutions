#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int cnt;
    while(cin>>s)
    {
        cnt = 0;
        for(int i = 0; i<s.size() ; i++)
        {
            if(isupper(s[i]))
                cnt++;
        }

        if( cnt == s.size())
            for(int i= 0;i<s.size();i++)
            {
                s[i] = tolower(s[i]);
            }
        else if( cnt == s.size()-1 && islower(s[0]))
        {
            s[0] = toupper(s[0]);
            for(int i= 1;i<s.size();i++)
                s[i] = tolower(s[i]);
        }
        cout<<s<<endl;
    }
    return 0;
}
