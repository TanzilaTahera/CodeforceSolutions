#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,a[100000],min,cnt,val;
    while(cin >> n)
    {
        cnt=0; min=1000000001; val=0;
        for(int i=0; i<n; i++) cin>>a[i];

        sort(a,a+n);
        for(int i=0; i<n; i++)
        {
            if(i==n-1) break;
            for(int k=i+1; k<n; k++)
            {
                val=abs(a[k]-a[k+1]);
                if(val<min) {
                    min=val;
                    cnt=1;
                }
                else if(val==min) cnt++;
                 cout << cnt << "  cnt inside 2nd loop " << min << "  min value" << a[k]<< "  value of a[k]" <<  endl;
            }
        }

        cout << min << " " << cnt << endl;
    }
}
