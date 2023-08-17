#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    vector<int> odd;
    vector<int> even;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            even.push_back(arr[i]);
        }
        else{
            odd.push_back(arr[i]);
        }
    }

    if(even.size()==0 || odd.size()==0)
    {
        cout<<-1<<endl;
        return;
    }

    cout<<odd.size()<<" "<<even.size()<<endl;
    for(int i=0;i<odd.size();i++)
    {
        cout<<odd[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<even.size();i++)
    {
        cout<<even[i]<<" ";
    }
    return;
}