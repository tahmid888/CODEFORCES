#include <bits/stdc++.h>
#define endl '\n'
using namespace std;



void func()
{


long long p,a,b,c;
      cin>>p>>a>>b>>c;

      if(  p%a==0 ||  p%b==0 ||   p%c==0  ){
        cout<<0<<endl;
        return;
        }

      long long mini=min(a-p%a,min( b-p%b,c-p%c));
      cout<<mini<<endl;

}


int main() {
  ios::sync_with_stdio(false);
	cin.tie(0);

int t;
  cin>>t;


  while(t--)
    {
      func();
    }

  return 0;
  }
