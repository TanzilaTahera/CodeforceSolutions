#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h1,h2,a,b,day_1,ans,left,time;
    while(cin >> h1 >> h2 >> a >> b)
    {
        ans = 0;
        day_1 = h1+(8*a);
        if(day_1<h2)
        {
            if(a<b)
                ans = -1;
            else
            {
                left = h2-day_1;
                time = 12*(a-b);

                if(time==0)
                    ans = -1;

                else if(left%time == 0)
                    ans = left/time;
                else
                    ans = (left/time)+1;
            }

        }

        cout << ans << endl;

    }

    return 0;
}
