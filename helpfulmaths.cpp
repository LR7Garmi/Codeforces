#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<char>v;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i+=2)
    {
        v.push_back(s[i]);
    }
    sort(v.begin(),v.end());
    string ans;
    for(auto it:v)
    {
        ans.append(1,it);
        ans.append("+");
    }
    ans.pop_back();
    cout<<ans<<endl;

return 0;
}