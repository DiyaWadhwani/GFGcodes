// { Driver Code Starts
// C++ program to remove recurring digits from
// a given number
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


    

class Solution{
    //Function to find the leaders in the array.
    public:
  //answer
    vector<int> leaders(int a[], int n)
    {
        vector<int> newArr;
        int i,j,temp=0;
        
        temp=a[n-1];
        newArr.push_back(temp);
        
        for(i=n-2; i>=0; i--)
            {
                if(a[i]>= temp)
                {
                    temp=a[i];
                    newArr.push_back(temp);
                }
            }
        reverse(newArr.begin(), newArr.end());
        return newArr;
    }
};


// { Driver Code Starts.

int main()
{
   long long t;
   cin >> t;//testcases
   while (t--)
   {
       long long n;
       cin >> n;//total size of array
        
        int a[n];
        
        //inserting elements in the array
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
        Solution obj;
        //calling leaders() function
        vector<int> v = obj.leaders(a, n);
        
        //printing elements of the vector
        for(auto it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }
        
        cout << endl;

   }
}
  // } Driver Code Ends
