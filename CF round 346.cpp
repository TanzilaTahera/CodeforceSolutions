#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b;
    while(cin>> n >> a >> b)
    {
        if ( b == n) cout << a << endl;

        else if( a+b == 0) cout << n << endl;

        else if(b<n)
        {
            if(b<=0)
            {

                b = abs(b);
                if ( b<n ) cout << abs(b-a) << endl;
                else if (b==n) cout << a << endl;

                else
                {

                    while(b>=n)
                    {
                        b = b-n;
                    }

                    cout << abs(b-a)  << endl;
                }
            }
            //if ( b<=0 ) cout << abs(b)-a << endl;

            else cout << b+a << endl;
        }

        else
        {

            while(b>=n)
            {
                b = b-n;
            }

            cout << b+a << endl;
        }
    }

    return 0;
}
