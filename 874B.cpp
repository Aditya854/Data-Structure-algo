#include <bits/stdc++.h>
using namespace std;

int poisonoausPlants(vector<int> p) {
  stack<pair<int,int>> sp;
  int days=0;
  for(int i=p.size()-1;i>=0;i--)
  {
	int temp=0;
	while(!sp.empty() && sp.top().first > p[i])
	{
       if(sp.top().second > temp)
	   {
		temp = sp.top().second;
	   }
	   else{
		temp++;
		// sp.pop();
	   }
	   sp.pop();
	}
	days = max(temp,days);
	sp.push({p[i],temp});
  }
  return days;
}

int main()
{
   int n;
   cin>>n;
   vector<int> a(n);
   for(int i=0;i<n;i++)
   {
	cin>>a[i];
   }

   cout<<poisonoausPlants(a)<<endl;
   
   return 0;
}
