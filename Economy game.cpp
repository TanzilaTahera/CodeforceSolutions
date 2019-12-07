#include<iostream>
using namespace std;
int main()
{
    int n1,n2,t,flag;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s>>n1>>n2;
        if(n1>=2400 && n2>n1)
            {
                flag=1;
            }
            else
            {
                continue;
            }
    }
    if(flag==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;

}
