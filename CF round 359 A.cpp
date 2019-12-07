#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,x,aa,tt,count;
    char c;
    while(cin >> n >> x)
    {
        tt=x; count =0;
        while(n--)
        {
            cin >> c >> aa;
            if( c == '+') tt+=aa;
            else
            {
                if(aa>tt) count++;
                else tt-=aa;
            }

        }

        cout << tt << " " << count << endl;
    }
    return 0;
}
