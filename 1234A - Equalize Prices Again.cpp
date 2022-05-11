#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);

  int t;
  cin>>t;
  while(t--)
    {
      long long  n;
      cin>>n;
      long long  a[n];
      long long  sum=0;
      long long  div;
      for(int i=1;i<=n;i++)
        {
          cin>>a[i];
        sum+=a[i];
            div = ceil((double)sum/n);

        }

      if(sum*n>=div)
      {
       cout<<div<<endl;
      }



    }
}
