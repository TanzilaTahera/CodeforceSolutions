#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,cnt[1000],m,k;
    string s;
    while(cin >> n)
    {
        for(int i=0; i<101; i++) cnt[i]=0;
        cin >> s;
        if(s[0]=='B') cnt[0]=1;
        k=0;
        for(int i=1; i<n ;i++)
        {
            if(s[i]=='B' && i==(n-1)) k++;

            if(s[i]=='B' && s[i-1]=='B' && i!=1) cnt[k]++;

            if(s[i]=='W' && s[i-1]=='B' && i!=1) {
                    cnt[k]++;
                    k++;
            }


        }
        cout << k << endl;
        for(int i=0; i<k; i++)
          cout << cnt[i]<< " ";


    }
}
