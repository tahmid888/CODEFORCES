#include <bits/stdc++.h>
using namespace std;

int main() {
ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
  long long t;
   cin>>t;
  while(t--)
  {   long long n;
      cin>>n;
      long long a[n+1];

      for(long long i=1;i<=n;i++)
      {
          cin>>a[i];
      }
      sort(a+1,a+n+1);
     long long diff=INT_MAX;
       for(long long i=1;i<n;i++)
      {
      if(diff> a[i+1]-a[i])
      {
          diff= a[i+1]-a[i];
      }
      }
      cout<<diff<<endl;
  }
   return 0;
}
