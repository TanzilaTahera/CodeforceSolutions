#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, a[100001], cnt, sum;
    while(cin>>n)
    {
        int x = 0;
        sum = 0;
        cnt = 0;
        for(int i=0; i<n; i++) cin>>a[i];


        sort(a,a+n);

        for(int i=0; i<n; i++)
        {
            sum+= a[i];
            if(sum == 3)
            {
                 continue;
            }
            if(sum >= 4)
            {
                cnt++;
                sum = 0;
            }

            else if(a[i]>2)
            {
                x = i;
                break;
            }

        }
        cout << cnt << " " << x << endl;
        cout << cnt+(n-x) << endl;
    }

    return 0;
}
