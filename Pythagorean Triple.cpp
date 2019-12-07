#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,k;
    while(cin >> n)
    {
        if(n == 1 || n==2) cout << -1 << endl;
        else if(n%2 != 0)
            cout << (n*n)/2 << " " << ((n*n)/2)+1 << endl;
        else
            cout << (((n*n)/2)/2)-1 << " " << (((n*n)/2)/2)+1 << endl;
    }
    return 0;
}
