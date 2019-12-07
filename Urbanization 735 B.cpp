#include<iostream>
#include<iomanip>
#include<cstdio>
#include<algorithm>
#include<string.h>
using namespace std;
int main()
{
    double val,val1;
    int i, a[100001],n,n1,n2;
    while(cin >> n >> n1 >> n2)
    {
        val=0; val1=0;
        memset(a,0,n);
        for(i=0; i<n; i++) cin >> a[i];

        sort(a,a+n);
        if(n1>n2) swap(n1,n2);

        for( i=n-1; i>=(n-n1); i--) val+=a[i];

        val/=n1;
        for( i=(n-n1-1); i>=(n-n2-n1); i--) val1+=a[i];

        val1/=n2;
        cout << fixed << setprecision(8)<< val+val1 << endl;

    }
}
