#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,a,b,capacity=0,t=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
       t=t-a;
       t=t+b;

        capacity=max(capacity,t);

    }
    cout<<capacity<<endl;

    return 0;
}
