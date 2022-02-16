
#include <iostream>

using namespace std;

int main() {

    int n, i, ans;
cin>>n;
if(n % 2==0)
{
    ans = n/ 2;
    cout<<ans<<endl;
    for (i = 0; i < ans; i++)
    {
        cout<<2<<" ";
    }
       cout<<endl;
}
else if (n ==3)
{
    cout<<1<<endl;
    cout<<3<<endl;
}
else
{
    n = n - 3;
    ans = n/ 2;
    cout<<ans+1<<endl;
    for (i = 0; i < ans; i++)
    {
        cout<<2<<" ";
    }
    cout<<3<<endl;

}
}





/*#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n%2==1)
    {
    n=n/2;
    n--;
    cout<<n+1<<endl<<3<<" ";
    }
    else {
        n=n/2;
        cout<<n<<endl;
    }
    for(int i=0;i<n;i++)
    {
        cout<<2<<" "<<endl;
    }
    return 0;

}
*/
