#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter no of Element to be stored in an array: ";
    cin>>n;
    int i;
    int arr[n];
    cout<<endl;
    cout<<"Enter Elements in an array: "<<endl;
    for (i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int pd=arr[1]-arr[0];
    int ans=2;
    int curr=2;
    int j=2;
    while(j<n)
    {
        if (pd==arr[j]-arr[j-1])
        {
            curr++;
        }
        else{
            pd=arr[j]-arr[j-1];
            curr=2;
        }
         ans= max(ans,curr);
        j++;
    }


    cout<<ans<<endl;
return 0;
}

