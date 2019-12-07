#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    long int sz,cnt1,cnt2,cnt3,cnt4,cnt5,cnt6,cnt7,x;
    while (cin >> s)
    {
        cnt1=0; cnt2=0; cnt3=0; cnt4=0; cnt5=0; cnt6=0; cnt7=0;
        sz=s.size();
        for(int i=0; i<sz; i++)
        {
            if(s[i]=='B') cnt1++;
            else if(s[i]=='u') cnt2++;
            else if(s[i]=='l') cnt3++;
            else if(s[i]=='b') cnt4++;
            else if(s[i]=='a') cnt5++;
            else if(s[i]=='s') cnt6++;
            else if(s[i]=='r') cnt7++;
        }
        cnt2=(cnt2/2);
        cnt5=cnt5/2;
        x=min(cnt1,(cnt2,(cnt3,(cnt4,(cnt5,(cnt6,cnt7))))));
        cout << x << endl;
    }
}
