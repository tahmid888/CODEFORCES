#include <iostream>

using namespace std;

int main()
{
    int k,n,w,sum=0,p;
    cin>>k>>n>>w;
    for(int i=1;i<=w ;i++)
    {  sum+=i;}
        p=(k*sum)-n;//p=k*sum;q=p-n; cout<<q;


    if(p<0) cout<<"0"<<endl;
    else
    cout<<p<<endl;
    return 0;
}
