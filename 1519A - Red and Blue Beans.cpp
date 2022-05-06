#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin>>t;
  while(t--)
    {
      long long r,b,d;
      cin>>r>>b>>d;

if(d==0)
{
  if(r==b) cout<<"yes"<<endl;
  else cout<<"no"<<endl;
  continue;
}
 else {
        long long mini=min(r,b);
     long long maxi=max(r,b);

      d++;

      if(mini*d>=maxi)
      {
        cout<<"yes"<<endl;

      }
      else {
        cout<<"no"<<endl;
      }

    }
    }

  return 0;

}
