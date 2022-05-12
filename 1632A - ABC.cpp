#include <bits/stdc++.h>
#define endl '\n'
using namespace std;


int main() {
  ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
  int t;
 cin>>t;
  while(t--)
    {
 long long n;
      cin>>n;
      string s;

          cin>>s;


      if(s.size()>2 || s=="11" || s=="00")
      {
        cout<<"NO"<<endl;
      }

    else {
    cout<<"YES"<<endl;
  }
  }
  return 0;
}
