#include<bits/stdc++.h>
using namespace std;
long int a[1000000],b[1000000];
int main()
{

    long int n;
    while(cin >> n)
    {
        cin >> a[0];
        for(int i=1; i<n; i++)
        {
            cin >> a[i];
            if(i==n-1)
            {
                b[i-1]=a[i]+a[i-1];
                b[i]=a[i];
            }
            else b[i-1]=a[i]+a[i-1];

        }
        for(int i=0; i<n; i++)
            cout << b[i] << " ";

        cout << endl;
    }
    return 0;
}
