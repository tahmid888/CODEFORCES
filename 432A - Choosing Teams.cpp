#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k,n,count=0;

    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<n;i++)
    {
        if(a[i]<5)
        {
           if(5-a[i]>=k)
           {
               count++;
           }
        }

    }

    if(count>=3){
   cout<<count/3<<endl;
    }
   else{
       cout<<"0"<<endl;

   }

    return 0;
}
