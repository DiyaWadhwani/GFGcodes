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
