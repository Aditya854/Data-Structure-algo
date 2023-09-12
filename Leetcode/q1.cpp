// An integer array is called arithmetic if it consists of at least three elements and if the difference between any two consecutive elements is the same.

// For example, [1,3,5,7,9], [7,7,7,7], and [3,-1,-5,-9] are arithmetic sequences.
// Given an integer array nums, return the number of arithmetic subarrays of nums.

// A subarray is a contiguous subsequence of the array.

 

// Example 1:

// Input: nums = [1,2,3, 4]
// Output: 3
// Explanation: We have 3 arithmetic slices in nums: [1, 2, 3], [2, 3, 4] and [1,2,3,4] itself.

#include <bits/stdc++.h>
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

    vector<int> dp(n,0);
int ans=0;

for(int i=2;i<n;i++)
{
    if(v[i]-v[i-1]==v[i-1]-v[i-2])
    {
        dp[i] = dp[i-1]+1;
        ans+=dp[i];
    }
}

for(auto it:dp)
{
    cout<<it<<" ";
}
cout<<endl;
cout<<ans<<endl;
    return 0;
}