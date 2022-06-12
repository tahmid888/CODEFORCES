#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios::sync_with_stdio(false);
	cin.tie(0);

int a,n,sum=0,b;
 int a1,a2,a3,b1,b2,b3;
  cin>>a1>>a2>>a3;
  cin>>b1>>b2>>b3;
  cin>>n;

  int for_a= ((a1+a2+a3)+5-1)/5;
  int for_b=((b1+b2+b3)+10-1)/10;
  sum=for_a+for_b;
  if(sum<=n)
  {
   cout<<"YES"<<endl;


  }
  else {
    cout<<"NO"<<endl;
  }



  return 0;
  }
