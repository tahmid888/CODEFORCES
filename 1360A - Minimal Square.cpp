
#include <bits/stdc++.h>
using namespace std;

int main() {

   int t,a,b;
   cin>>t;
   for(int i=0;i<t;i++)
   {
       cin>>a>>b;
       if(a>b)
       {
           swap(a,b);
       }
       cout<<max(a*2,b)*max(a*2,b)<<endl;
   }
   return 0;
}
