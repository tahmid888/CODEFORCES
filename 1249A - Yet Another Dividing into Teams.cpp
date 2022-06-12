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
          int n,i,count=0;
      cin>>n ;
   int a[n];
      for(int i=0;i<n;i++)
        {

        cin>>a[i];

          }

      bool varr= true;
       for(int i=0;i<n;i++)
        {
           for(int j=0;j<i;j++)
        {

          varr &= abs(a[i] - a[j]) != 1;
          }
          }


    cout<<2-varr<<endl;
  }
  return 0;
  }
