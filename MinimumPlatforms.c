// { Driver Code Starts
// Program to find minimum number of platforms
// required on a railway station
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


///answer
int findPlatform(int arr[], int dep[], int n)
{
    int plat=1, res=1, i=1, j=0;
    
    sort(arr, arr+n);
    sort(dep, dep+n);
    
    while(i<n && j<n)
    {
        if(arr[i]<=dep[j])
        {
            plat++;
            i++;
        }
        else if(arr[i]>dep[j])
        {
            plat--;
            j++;
        }
        if(plat>res)
            res=plat;
    }
    return res;
}


// { Driver Code Starts.
// Driver code
int main()
{
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        int arr[n];
        int dep[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int j=0;j<n;j++){
            cin>>dep[j];
        }
    cout <<findPlatform(arr, dep, n)<<endl;
    } 
   return 0;
}  // } Driver Code Ends
