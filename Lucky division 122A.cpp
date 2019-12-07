#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt;
    int div[14]={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    while( cin >> n )
    {
        cnt = 0;
        for(int i=0; i<14; i++)
        {
            if(n%div[i] == 0)
            {
                cout << "YES" << endl;
                break;
            }
            else cnt++;
        }
        if(cnt >= 14) cout << "NO" << endl;
    }

    return 0;
}
