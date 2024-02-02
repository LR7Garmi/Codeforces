#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    if(m==n)
        cout<<"1"<<endl;
    else
    {
        int cnt=0;
        while(m<=n)
        {
            cnt++;
            m*=3;
            n*=2;
        }
        cout<<cnt<<endl;
    }

return 0;
}