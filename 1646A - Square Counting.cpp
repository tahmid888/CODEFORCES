#include <bits/stdc++.h>
#define endl '\n'
using namespace std;



int main() {
  ios::sync_with_stdio(false);
	cin.tie(0);

long long  t;
  cin>>t;


  while(t--)
    {
      long long  n,s;
      cin>>n>>s;
      long long  result = pow(n, 2);
      if(s<=result-1)
      {
        cout<<s/result<<endl;
      }
      else if(s>=result)
      {
        cout<<s/result<<endl;
      }
    }

  return 0;
  }
