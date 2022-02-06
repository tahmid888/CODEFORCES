#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n;

    cin>>t;

    for(int i=1;i<t;i++)
    {

        if(i%2 !=0)cout<<"I hate that";
        else if(i%2==0)cout<<"I love that";
    }

    if(n%2 !=0)cout<<"I hate it";
    if(n%2==0)cout<<"I love it";
    return 0;
}
