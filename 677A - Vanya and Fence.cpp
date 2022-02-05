
#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n,h,a,count=0,notb=0;
   cin>>n;
   cin>>h;
   for(int i=0;i<n;i++)
   {  cin>>a;
       if(a>h){
       count+=2;
       }
       else
      { notb++;

      }
   }
      cout<<count+notb<<endl;
    return 0;
}
