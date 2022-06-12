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
     long long  n,count=0,x;
      cin>>n;
      while(n>=2050)
      {
        count++;
        x=2050;
       while(x<=n)
      {
        x*=10;
        }
      x/=10;
        n-=x;

    }
      if(n!=0)
        cout<<-1<<endl;
      else
         cout<<count<<endl;
}
  return 0;
  }
