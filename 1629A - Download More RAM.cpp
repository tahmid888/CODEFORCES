#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);

  int t;
  cin>>t;
  while(t--)
    {
  vector<pair<int,int>>v;

      int n,k;
      cin>>n>>k;
      int a[n],b[n];

      for(int i=0;i<n;i++)
        {
          cin>>a[i];
        }
      for(int i=0;i<n;i++)
        {
          cin>>b[i];
        }
      for(int i=0;i<n;i++)
        {
          v.push_back({a[i],b[i]});
          }
      sort(v.begin(),v.end());
      long long ans=k;
      for(int i=0;i<n;i++)
        {
             int x=v[i].first;
          int y=v[i].second;
          if(ans>=x)
            ans+=y;
          else break;
          }
      cout<<ans<<endl;
    }
}
