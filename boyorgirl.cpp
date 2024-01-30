#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=0;
    string s;
    cin>>s;
    sort(s.begin(),s.end());
   // char dp[s.length()];
    int ans=0;
    for(int i=1;i<s.length();i++)
   {
        if(s[i]!=s[i-1])
            ans++;
    }
    if(ans&1)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else
        cout<<"IGNORE HIM"<<endl;

return 0;
}