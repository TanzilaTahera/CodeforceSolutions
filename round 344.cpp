#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[500][500],n,m,k,row_clm,i,j,ch2;
    char ch1;

    while(cin>>n>>m>>k)
    {
        for(i=0; i<n; i++)
          for(j=0; j<m; j++)
              a[i][j] = 0;

        while(k--)
        {
            cin>>ch1>>row_clm>>ch2;

            if(ch1 == 1)
            {
                    j = row_clm-1;
                    for( i=0; i<n; i++)
                        a[i][j] = ch2;
            }
            else
            {
                i = row_clm-1;
                for( j=0; j<m; j++)
                        a[i][j] = ch2;
            }

        }

         for(i=0; i<n; i++)
         {
            for(j=0; j<m; j++)
            {
                   cout<<a[i][j]<<" ";
            }

            cout<<endl;
         }

    }

    return 0;
}
