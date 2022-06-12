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
int k;
      cin>>k;
      int ans=100-k;

      int tot=__gcd(k,ans);
     k/=tot;
      ans/=tot;
      cout<<k+ans<<endl;

    }
  return 0;
}
