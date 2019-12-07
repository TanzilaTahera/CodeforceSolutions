#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    string s1,s2;
    while(cin>>a>>s1>>s2)
    {
        if(s2=="week")
        {
            if(a==1)
                cout<<52<<endl;
            if(a==2)
                cout<<52<<endl;
             if(a==3)
                cout<<52<<endl;
             if(a==4)
                cout<<52<<endl;
             if(a==5)
                cout<<53<<endl;
             if(a==6)
                cout<<53<<endl;
             if(a==7)
                cout<<52<<endl;

        }
        else
        {
            if(a==30)
                cout<<11<<endl;
             else if(a==31)
                cout<<7<<endl;
             else
                cout<<12<<endl;
        }
    }
    return 0;
}
