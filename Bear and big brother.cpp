#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,cnt,val_1,val_2;
    while(cin >> a >> b)
    {
        cnt=1;
        val_1=a*3;
        val_2=b*2;
        while(val_1<=val_2)
        {
            val_1*=3;
            val_2*=2;
            cnt++;
        }
        cout << cnt << endl;
    }
}
