#include <bits/stdc++.h>

using namespace std;

int main()
{
   int t,n;
   cin>>t;

   while(t--)
   {
       int n;
       cin>>n;
      int a[n];


      for(int i=0;i<n;i++)
      {
          cin>>a[i];
      }
      int max=a[0];
       for(int i=0;i<n;i++)
      {
          if(a[i]>max)
          { max=a[i]; }
      }
       int min=a[0];
       for(int i=0;i<n;i++)
      {
           if(a[i]<min) {
              min=a[i];
          }
      }
      cout<<max-min<<endl;

   }

    return 0;
}
