#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios::sync_with_stdio(false);
	cin.tie(0);

  int n,a;
cin>>n;

  int sum1=0,sum2=0,sum3=0;
  for(int i=1;i<=n;i++)
    {
      cin>>a;

   if (i%3==1)
   {
     sum1+=a;
   }
      else if(i%3==2)
      {
        sum2+=a;
      }
      else
      {
        sum3+=a;

      }


      }

      if(sum1>sum2 && sum1>sum3 )
      {
        cout<<"chest"<<endl;
      }
 else if(sum2>sum1 && sum2>sum3)
      {
        cout<<"biceps"<<endl;
      }
      else
      {
         cout<<"back"<<endl;
      }

  return 0;
  }
