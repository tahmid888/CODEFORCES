#include <bits/stdc++.h>
#define endl '\n'
using namespace std;


int main() {
  ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
  int t;
 cin>>t;
  while(t--)
    {
 long long  a,b,k;
      cin>>a>>b>>k;
       long long  x= (a-b)*(k/2);
      if(k %2==0)
      {
      cout<<x<<endl;
      }
      else {
         cout<<x+a<<endl;
        }

      }
  return 0;
}
