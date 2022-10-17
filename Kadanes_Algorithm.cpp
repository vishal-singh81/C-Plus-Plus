//function for kadane's algorithm 
long long maxSubarraySum(int arr[], int n){
        int mx=INT_MIN;
        int currsum=0;
        for(int i=0;i<n;i++)
        {
            currsum=max(currsum+arr[i],arr[i]);
            mx=max(currsum,mx);
        }
        return mx;
    }
