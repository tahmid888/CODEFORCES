#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
	cin.tie(0);
  int t,a;
  cin>>t;
  while(t--)
    {
      int n,i;
      cin>>n;
    	vector<int> cnt(n+1,0);

      for(int i = 0; i < n; i++) {
     int a;
          cin>>a;

          cnt[a]++;
        }
    int  maxi=0;
      for(auto u: cnt)
        {
           maxi=max(maxi,u);
        }
       cout<<maxi<<endl;
    }

  return 0;
}
