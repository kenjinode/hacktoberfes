#include<iostream>
#include<climits>
using namespace std;

int largestSubarraySum(int arr[], int n)
{
    //create csum array[]
    int csum[n+1];
    csum[0]=0;

    for(int i=1; i<=n; i++)
    {
        csum[i]=csum[i-1]+arr[i-1];

    }

    //print csum array[]
    /*cout<<"cumulative sum array"<<endl;
    for(int i=0; i<=n; i++)
    {

        cout<<csum[i]<<" ";
    }*/

    cout<<endl;

    int max_sum=INT_MIN, target_sum, i ,j;

    //As we know subarrays are contiguous,
    /// I am taking all combinations of 2 csum elements and subtracting them to get the sum of all the possible subarrays
    /// 0-1 0-2 0-3 0-n then
    /// 1-2 1-3 1-4 1-n till n-1 - n and the maximum of these differences will give me my sum of the maximum subarray

    for(i=0;i<=n-1; i++)
    {

        for(int j=i+1;j<=n; j++)
        {
            target_sum=csum[j]-csum[i];
            //cout<<target_sum<<" ";
            if(target_sum>max_sum)
            {
                max_sum=target_sum;
            }
        }
    }

return max_sum;
}


int main()
{

    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    cout<<"Largest subarray sum: "<<largestSubarraySum(arr,n);

    return 0;
}

