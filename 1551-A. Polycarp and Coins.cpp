#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,x,y;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;

       x=n/3;
       y=n%3;
       int ans1=x;
       int ans2=x;
       if(y==0)
       {
           cout<<ans1<<" "<<ans2<<endl;
       }
       if(y==1){
     ans1++;

           cout<<ans1<<" "<<ans2<<endl;

       }
       else if(y==2)
       {
           ans2++;
            cout<<ans1<<" "<<ans2<<endl;
       }
    }

    return 0;
}
