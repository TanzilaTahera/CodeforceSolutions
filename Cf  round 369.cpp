#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,fg,place,pair;
    string ss[1000];
    while(cin >> n)
    {
        fg=0; pair=0; place=0;
        for(int i=0; i<n; i++)
        {
            cin >> ss[i];
            if(ss[i][0]=='O' && ss[i][1]=='O' && fg==0)
            {
                fg=1;
                ss[i][0]='+';
                ss[i][1]='+';

            }
            else if(ss[i][3] == 'O' && ss[i][4] == 'O' && fg==0)
            {
                fg=1;
                ss[i][3]='+';
                ss[i][4]='+';
            }
        }

        if(fg==1)
        {
            cout << "YES"<< endl;
             for(int i=0; i<n; i++) cout << ss[i] << endl;
        }
        else cout << "NO" << endl;

    }
    return 0;
}
