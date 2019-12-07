#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,d,day,val;
    while(cin >> m >> d)
    {
        val=0;
        if(m==9 || m==4 || m==6 || m==11) day=30;
        else if(m==2) day=28;
        else day=31;
        val=(day-(8-d));
        if(val%7==0) cout << (val/7)+1 << endl;
        else cout << (val/7)+2 << endl;
    }
     return 0;
}
