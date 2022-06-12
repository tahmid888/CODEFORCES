#include <bits/stdc++.h>
#define endl '\n'
using namespace std;



int main() {
  ios::sync_with_stdio(false);
	cin.tie(0);
int t;
  cin>>t;
  while(t--)
    {
         int n;
      cin>>n ;
 map<int,int> cnt;
      for(int i=0;i<n;i++)
        {int x;
          cin>>x;
          if(x<0)x=-x;


          cnt[x]++;
        }
    int  ans=0;
      for(auto u:cnt)
      {
        if(u.first==0) ans+=1;
        else if(u.second>=2) ans+=2;
        else  ans+=1;
      }
      cout<<ans<<endl;

  }
  return 0;
  }
