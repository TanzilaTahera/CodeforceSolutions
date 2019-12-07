#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int n,ans;
    while(cin >> n)
    {
        ans=n%4;
        if(n==0) cout << 1 << endl;
        else if(ans==0) cout << 6 << endl;
        else if(ans==3) cout << 2 << endl;
        else if(ans==1) cout << 8 << endl;
        else if(ans==2) cout <<  4<< endl;
    }
    return 0;
}
