#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int lower=0;
    int upper=0;
    for(int i=0;i<s.length();i++)
    {
        if(isupper(s[i]))
            upper++;
        if(islower(s[i]))
            lower++;
    }
    if(upper>lower)
    {
         for(int i=0;i<s.length();i++)
        {
            s[i]=toupper(s[i]);   
        }
    }
    else
    {
        for(int i=0;i<s.length();i++)
        {
            s[i]=tolower(s[i]);   
        }
    }
    cout<<s<<endl;
return 0;
}