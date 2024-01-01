#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int len;
        cin>>len;
        int arr[len];
        for(int i=0;i<len;i++)
        {
            cin>>arr[i];
        }
        int currSum=0;
        int prevParity=-1;
        int ans=-1e7;
        for(int i=0;i<len;i++)
        {
            if(prevParity==-1||(abs(arr[i])%2)!=prevParity)
            {
            currSum+=arr[i];
            }
            else if(prevParity==(abs(arr[i])%2))
            {
                currSum=arr[i];
            }
            ans=max(ans,currSum);
            prevParity=(abs(arr[i])%2);
            if(currSum<0)
            {
                currSum=0;
            }
        }
        cout<<ans<<endl;

    }
}