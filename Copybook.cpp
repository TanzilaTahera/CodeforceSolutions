#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,a,b,c,num,res,ans;
    while(cin >> n >> a >> b >> c)
    {
        num=(n%10)+(10*((n/10)%10));
        //cout << num;
        if(num%4==0) ans=0;
        else if(n%2==0) ans=b;
        else
        {
            res=num%4;
            if(res==1)
                {
                    if((a*3)>c) ans=c;
                    else ans=a*3;
                }
            else
                {
                    ans=a;
                }


        }
        cout << ans << endl;


    }
}
