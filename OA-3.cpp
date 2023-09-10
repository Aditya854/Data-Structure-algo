#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    vector<int> v(n);
    
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
// kadane's algorithm

    int max_subsum=INT_MIN;
    int curr_sum=0;
    for(int i=0;i<n;i++)
    {
        curr_sum+=v[i];
        if(curr_sum<0)
        {
            curr_sum=0;
        }

        if(max_subsum<curr_sum)
        {
            max_subsum=curr_sum;
        }
    }

    cout<<"max subarray sum is:"<<max_subsum<<endl;
    return 0;
}


//wap for min subarrray sum
// wap for max subarray sum