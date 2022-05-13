#include <bits/stdc++.h>
using namespace std;


int main() {
  int n,m,i,pair=0;

  cin>>n>>m;
  int num1,num2;
 for(int a=0;a<(n+m);a++)
   {
  for(int b=0;b<(n+m);b++)
   {


      num1= pow(a, 2)+b;
      num2=pow(b,2)+a;
     if(num1==n && num2==m)
        pair++;
     }

     }
    cout<<pair<<endl;




  return 0;
}
