#include <bits/stdc++.h>

using namespace std;

int main()
{
   int t,mp=0;
   cin>>t;
   int n[t];
   for(int i=0;i<t;i++)
   {
       cin>>n[i];}
   for(int i=0;i<t;i++)
   {
       if(n[i]!=n[i+1])

       mp++;

   }

   cout<<mp;
    return 0;
}
