// { Driver Code Starts
 #include <bits/stdc++.h>
using namespace std;

int atoi(string str);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		cout<<atoi(s)<<endl;
	}
}// } Driver Code Ends


//answer
/*You are required to complete this method */
int atoi(string str)
{
    
    int n = str.length();
    int integer=0, i;
    string val;
   
    for(i=0; i<n; i++)
    {
        if(str[i]=='-' && isdigit(str[i+1]))
            val.push_back(str[i]);
        if(isdigit(str[i]))
            val.push_back(str[i]);
        else if(isalpha(str[i]))
        {
            return -1;
            break;
        }
    }
    
  //convert string to int
    stringstream res(val);
    res>>integer;
    return integer;
}
