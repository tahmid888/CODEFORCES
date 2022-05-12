#include <bits/stdc++.h>
#define endl '\n'
using namespace std;


int main() {
  ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
  int t;
 cin>>t;
  while(t--)
    {
long long  n,i;
      cin>>n;
    long long a[n];


      for(int i=0;i<n;i++)
        {
          cin>>a[i];
        }
long long   maxi=0;
      for(int i=0;i<n-1;i++)
        {
       maxi= max(maxi,a[i]*a[i+1]);


      }
         cout<<maxi<<endl;
  }

  return 0;
}
