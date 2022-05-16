#include <bits/stdc++.h>
#define endl'\n'
using namespace std;



void solve()
{
  int n;
      cin>>n;

      string  s;
      cin>>s;

      for(int i=0;i<=4;i++)
        {
        string r1 = s.substr(0, i);
          string r2 = s.substr(n-4+i,4-i);
          string r3= r1+r2;
          if(r3=="2020")
          {
            cout<<"yes"<<endl;
            return;
          }

          }

       cout<<"No"<<endl;
    }



int main() {
  ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
  int t;
  cin>>t;
  while(t--)
    {
      solve();
      }
  return 0;
}
