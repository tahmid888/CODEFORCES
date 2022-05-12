#include <bits/stdc++.h>
#define endl '\n'
using namespace std;


int main() {
  ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
  int t;
 cin>>t;
  while(t--)
    {
     int n;


      cin>>n;
      vector<int> a(n);
      for(int i=0;i<n;i++)
        {
          cin>>a[i];
          }

      int  maxi=a[0];

         long long sum=0;
      for(int i=0;i<n;i++)
        {

          if(maxi<a[i])
         maxi=a[i];
           sum += a[i];
          }
      cout << fixed << setprecision(10);
      cout<< 1.0*(sum-maxi)/(n-1)+maxi<<endl;
    }
  return 0;
}
