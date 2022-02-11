#include <bits/stdc++.h>

using namespace std;

int main()
{
 int a[4],x,y,z;

 for(int i=0;i<4;i++)
 {
     cin>>a[i];

 }
     sort(a,a+4);

   z= a[3]-a[0];

   y= a[2]-z;

   x=a[3]-(y+z);

     cout<<x<<" "<<y<<" "<<z;


    return 0;
}
