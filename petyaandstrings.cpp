#include<iostream>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1;
    cin>>s2;
    int i=0;
    int f=0;
    int s=0;
    for(i=0;i<s1.length();i++)
    {
        if(tolower(s1[i])>tolower(s2[i]))
        {
            cout<<"1"<<endl;
            exit(0);
        }
        if(tolower(s1[i])<tolower(s2[i]))
        {
            cout<<"-1"<<endl;
            exit(0);
        }
    }
    cout<<"0"<<endl;
return 0;
}