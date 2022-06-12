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
      string s;
      cin>>s;
      bool check=false ;


      for(int i=0;i<n-1;i++)
        {
          if(s[i] != s[i+1])
          {
            cout<<i+1<<" "<<i+2<<endl;
            check=true;
            break;
          }
          }

      if(check==false )
      {
        cout<<-1<<" "<<-1<<endl;
        }

    }
  return 0;
}
