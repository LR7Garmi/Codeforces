#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,n,m;
    cin>>k>>n>>m;
    int i=1;
    int cost=0;
    while(i<=m)
    {
        cost+=(i*k);
        i++;
    }
    if(cost>n)
        cout<<cost-n<<endl;
    else
        cout<<"0"<<endl;
return 0;
}