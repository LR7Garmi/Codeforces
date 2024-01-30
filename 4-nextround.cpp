#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    if(arr[0]==0)
        cout<<0<<endl;
    else
    {
            int cnt=0;
            for(int i=0;i<n;i++)
            {
                if(arr[i]>=arr[k-1] && arr[i]>0)
                {
                    //cout<<arr[k-1]<<endl;
                    //cout<<arr[i]<<endl;
                    cnt++;
                }
            }
            cout<<cnt<<endl;
        
    }
return 0;
}