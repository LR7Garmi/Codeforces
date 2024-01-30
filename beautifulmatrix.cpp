#include<iostream>
using namespace std;
int main()
{
    int f,s;
    int arr[6][6];
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]==1)
            {
                f=i;
                s=j;
            }
        }
    }

    cout<<abs(f-3)+abs(s-3)<<endl;
    return 0;
}