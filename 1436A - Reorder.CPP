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
      int n,m,sum=0;
      cin>>n>>m;

      int a[n];
      for(int i=0;i<n;i++)
        {
          cin>>a[i];
          sum+=a[i];
        }

      sort(a,a+n);
      if(sum==m)
      {
        cout<<"yES"<<endl;
      }
      else {
        cout<<"NO"<<endl;
      }

    }
  return 0;
  }
