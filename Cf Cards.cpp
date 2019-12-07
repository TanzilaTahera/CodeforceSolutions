#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[1000], n, b[1000];
    while(cin >> n)
    {
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            b[i]=a[i];
        }

        sort(a,a+n);
        int k=n;
        for(int i=0; i<n/2; i++)
        {
           for(int j=1; j<=n/2; j++)
           {
               if(a[i] == b[j])
               {
                   for(int m=i; m<=n; m++)
                   {

                         cout << j << " " << m << endl;
                         break;
                   }

               }

           }
          k--;
        }
    }
    return 0;
}
