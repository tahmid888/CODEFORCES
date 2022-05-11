#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);

  int t;
  cin>>t;
  while(t--)
    {
   int n,i=1;
      cin>>n;

      int sum=0,count=0;

        while(sum<n){
          count++;

          sum+=i;
          i+=2;

          }

      cout<<count<<endl;
  }
return 0;
  }
