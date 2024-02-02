#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='A')
        {
            cnt++;
        }
    }
    if((s.length()-cnt)>cnt)
    {
        cout<<"Danik"<<endl;
    }
    else if((s.length()-cnt)<cnt)
    {
        cout<<"Anton"<<endl;
    }
    else
        cout<<"Friendship"<<endl;
return 0;
}