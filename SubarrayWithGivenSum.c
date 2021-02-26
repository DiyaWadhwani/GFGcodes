// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to find the subarray with given sum k
// arr: input array
// n: size of array
//answer
vector<int> subarraySum(int arr[], int n, int s){
    
    int sum=0, j;
    vector<int> newArr;
    
    for(int i=0;i<n;i++)
    {
        sum=0;
        j=i;
        while(sum <= s)
            {
                sum += arr[j];
                if(sum == s)
                    break;
                else
                    j++;
            }
        if(sum == s)
        {
            newArr.push_back(i+1);
            newArr.push_back(j+1); 
            break;
        }
        else
            sum=0;
    }
    
    if(sum==0)
        newArr.push_back(-1);
    
    return newArr;
}



// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        vector<int>res;
        res = subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}  // } Driver Code Ends
