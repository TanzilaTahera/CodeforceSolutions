#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,rr,count,r,val;
    cin >> k >> rr;

    count=0;
    val=k;
    r=k%10;

    while(r!=rr && r!=0)
    {

        val+=k;
        r=val%10;
        count++;
    }

    cout << count+1 << endl;
    return 0;
}
