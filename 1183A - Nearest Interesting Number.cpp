#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios::sync_with_stdio(false);
	cin.tie(0);

   int x,n1,i,s;

   cin >> x;

  for(int i=x;i<=1100;i++)
    {
      x=i;
     s=0;

  while (x != 0) {

     s = s + x % 10 ;
    x = x / 10;
    }
  if(s%4==0)
  {
     n1=i;
   break;
  }

  }

cout<<n1<<endl;

    return 0;
}
