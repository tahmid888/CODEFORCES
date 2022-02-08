#include<bits/stdc++.h>

using namespace std;

int main()
{

int t,a,n;
cin>>t;
for(int i=0;i<t;i++)
{
    cin>>n;

    a=(n-1)/2;

    if(n>a)
    {
        cout<<a<<endl;
    }
    else cout<<n<<endl;
}

    return 0;
}
