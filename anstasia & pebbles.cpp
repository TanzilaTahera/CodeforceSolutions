#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,k,p,cnt,day;
    while(cin >> n >> k)
    {
        cnt=0; day=0;
        for(int i=0; i<n; i++) {

                cin >> p;
                if(p<=k) cnt++;
                else {
                    if(p%k==0) cnt+=p/k;
                    else cnt+=(p/k)+1;
                }
                if(cnt%2!=0) {
                        day+=(cnt/2);
                        cnt=1;
                }
                else  {
                        day+=(cnt/2);
                        cnt=0;
                }
        }
        if(cnt==1) cout << day+1 << endl;
        else cout << day << endl;


    }
    return 0;
}
