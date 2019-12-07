#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,n,s,p,val,tot,ans,rs_ans,res;
    while(cin >> k >> n >> s >> p){
    val = n%s;
    res=n/s;
    if(val != 0 ) res++;
    tot = res*k;
    rs_ans=tot%p;
    ans=tot/p;
    if(rs_ans != 0) cout << ans+1 << endl;
    else cout << ans << endl;

    }

}
