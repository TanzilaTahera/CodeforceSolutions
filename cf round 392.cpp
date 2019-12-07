#include<bits/stdc++.h>
using namespace std;
long int a[1000004];
int main()
{
    long int n,sum,mx;
    while(cin >> n)
    {
        mx=0;
        sum=0;
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            if(a[i]>=mx) mx=a[i];
        }
        for(int i=0; i<n; i++)
        {
            sum+=(mx-a[i]);
        }
        cout << sum << endl;
    }
}
