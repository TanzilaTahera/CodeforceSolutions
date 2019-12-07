#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    int vowel_count,const_count;
    while(cin>>s>>t){
            vowel_count=0;
            const_count=0;
        if(s.size()!=t.size()) cout << "No" <<endl;
     else{
        for(int i=0; i<s.size(); i++){
            if(s[i]=='a'|| s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            {
                if(t[i]=='a'|| t[i]=='e'||t[i]=='i'||t[i]=='o'||t[i]=='u')
                    vowel_count=1;
                else {
                        vowel_count=2;
                        break;
                }
                break;
            }
            if(vowel_count==2) break;
            if(s[i]!='a'&& s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u')
            {
                if(t[i]!='a'&& t[i]!='e' && t[i] !='i' && t[i]!='o' && t[i]!='u')
                    const_count=1;
                else {
                        const_count=2;
                        break;
                }
                break;
            }
            if(const_count==2) break;

        }

        if(vowel_count==2 || const_count==2) cout << "No" <<endl;
        else cout << "Yes" <<endl;
    }
    }
    return 0;
}
