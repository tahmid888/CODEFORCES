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

    int n;
      cin>>n;

      if(n==1)
      {
        cout<<0<<endl;
      }
        else if(n==2)
      {
        cout<<1<<endl;
      }
           else if(n==3)
      {
        cout<<2<<endl;
      }


      else if(n % 2 ==0)

      {
        cout<<2<<endl;
      }
      else if(n%2 != 0)
      {

        cout<< 3<<endl;
      }

      }
  return 0;
  }
