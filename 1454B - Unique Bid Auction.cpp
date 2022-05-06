#include<bits/stdc++.h>
using namespace std;
#define ll  long long
int main()
{
  int t;
  cin>>t;
  while(t--)
    {
      ll n,v;
      cin>>n;
      vector<ll> fe(n+1),idx(n+1);
      for(int i=0;i<n;i++)
        {
          cin>>v;
          fe[v]++;
          idx[v] = i+1;
        }
      ll index=-1;
      for(int i=0;i<=n;i++)
        {
          if(fe[i]==1)
          {
           index=idx[i];
            break;
          }
          }
     cout<<index<<endl;


      }
  return 0;
}
