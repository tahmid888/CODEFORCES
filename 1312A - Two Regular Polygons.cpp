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
int n,m;
      cin>>n>>m;
      if(int(n%m==0))
      {
        cout<<"yes"<<endl;
      }
      else {
        cout<<"no"<<endl;
      }
    }
  return 0;
}
