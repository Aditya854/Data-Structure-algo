// Given an integer array nums and an integer k, return the number of good subarrays of nums.

// A subarray arr is good if it there are at least k pairs of indices (i, j) such that i < j and arr[i] == arr[j].

// A subarray is a contiguous non-empty sequence of elements within an array.


// Input: nums = [3,1,4,3,2,2,4], k = 2
// Output: 4
// Explanation: There are 4 different good subarrays:
// - [3,1,4,3,2,2] that has 2 pairs.
// - [3,1,4,3,2,2,4] that has 3 pairs.
// - [1,4,3,2,2,4] that has 2 pairs.
// - [4,3,2,2,4] that has 2 pairs.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    int i=0;
    int j=0;
    map<int,int> mp;
    int ans=0;
    int pairs=0;

    while(j<n)
    {
        mp[v[j]]++;
        pairs+=mp[v[j]]-1;

        while(i<j && pairs>=k)
        {
            ans += n-j;

            mp[v[i]]--;
            pairs-=mp[v[i]];
            i++;
        }
        j++;
    }

    cout<<ans<<endl;

    return 0;
}