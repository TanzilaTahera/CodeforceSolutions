#include<bits/stdc++.h>
using namespace std;
int main()
{
    map <int, int > store;
    int num,n,sum,mx;
    while(cin >> n)
    {
        sum=0; mx=0;
        while(n--)
        {
            cin >> num;
            if(num>mx) mx=num;
            store[num]++;
        }

        for(int i=1; i<mx; i++)
        {
            if(store[i] > 1) sum+=store[i]-1;
        }

        cout << n-sum << endl;
        store.clear();
    }

}
