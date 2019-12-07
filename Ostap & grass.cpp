#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n,k,m,cnt=0;

    cin >> n >> m;

    cin >> s;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='T' || s[i]=='G')
        {
            for(int k=i; k<n; k+=m)
            {
                //cout << k << " k " <<endl;
                if(s[k]=='#')
                {
                    cout << "NO" << endl;
                    return 0;
                }
                else if( s[k]=='T' || s[k]=='G')
                {
                    cnt++;
                    //cout << k << endl;
                    if(cnt==2)
                    {

                        cout << "YES  "<< endl;
                        return 0;
                    }

                }
            }
           cout << "NO" <<endl;
           return 0;
        }
    }
    return 0;
}
