#include <bits/stdc++.h>
#define endl '\n'
using namespace std;



int main() {
  ios::sync_with_stdio(false);
	cin.tie(0);


    long long  n,i;
      cin>>n;
       long long a[n];
      for(int i=0;i<n;i++)
        {
          cin>>a[i];
        }

      long long m;
      cin>>m;
       long long b[m];
      for(int i=0;i<m;i++)
        {
          cin>>b[i];
        }

      sort(a,a+n);
     sort(b,b+n);


   cout<<a[n-1]<<" "<<b[m-1]<<endl;


  return 0;
  }
