
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    double avg,sum=0;
    cin>>t;
    int n[t];
    for(int i=0;i<t;i++)
    {
        cin>>n[i];

        sum+=n[i];
        avg=sum/t;



    }
    cout<<fixed;
    cout<<setprecision(12)<<avg<<endl;

    return 0;
}
