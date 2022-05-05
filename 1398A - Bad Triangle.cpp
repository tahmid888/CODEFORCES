#include <bits/stdc++.h>
#define endl '\n'
using namespace std;


   void solve(){

  int n;
  cin>>n;

    vector<int>a(n);

  for( int i=0;i<n;i++)

      cin>>a[i];

     for(int i=0;i<n;i++)
    {
       if(a[i]+a[i+1]<=a[n-1])
        {

           cout<<i+1<<" "<<i+2<<" "<<n<<endl;
              return;
        }


    }


        cout<<-1<<endl;

           return;

  }




int main()
{
    ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);

    int t;
  cin>>t;
  for(int i=0;i<t;i++){

            solve();
        }
        return 0;
}
