#include <bits/stdc++.h>

using namespace std;

int main()
{
   int t,count=0;
   cin>>t;
   int n[t];
   for(int i=0;i<t;i++)
   {
       cin>>n[i];

       if(n[i]==1)
       {  count++;


       }
   }

   if(count<1) cout<<"EASY";
   else cout<<"HARD";
    return 0;
}
