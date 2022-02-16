#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;

       if(n%2==0)
       {
           n=n/2;
           cout<<n<<endl;
       }
       else {
           n=n-1;
           n=n/2;
            cout<<n<<endl;
       }
    }



    return 0;
}
