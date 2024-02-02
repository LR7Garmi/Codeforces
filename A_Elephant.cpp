#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n<=5)
        cout<<"1"<<endl;
    else
    {
        float div=n/5;
        if(n%5==0)
        {
            cout<<div<<endl;
        }
        else
            cout<<ceil(div)+1<<endl;
    }
return 0;
}