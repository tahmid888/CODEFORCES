#include <bits/stdc++.h>
using namespace std;

int main() {

  int t;
  cin>>t;
  while(t--)
    {
      int n;
      cin>>n;
      int a[n],b[n];
      for(int i=0;i<n;i++)
        {
          cin>>a[i];
          }

      for(int i=0;i<n;i++)
        {
          cin>>b[i];
        }

      for(int i=0;i<n;i++)
        {
              if(a[i]>b[i])
              {
               swap(a[i],b[i]);
              }

          }


       cout << (*max_element(a, a + n)) * (*max_element(b, b + n))<<endl;


      }

  return 0;
  }


  /*
  #include<bits/stdc++.h>
using  namespace  std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>

#define faster  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl      '\n'
 #define mod 1000000007
typedef long long int ll;
typedef unsigned long long int  llu;

// PRIME NUMBER TEST//
bool prime(int n)
{
    if(n<2)return false;
    if(n<=3)return true;
    if(n%2==0)return false;
    for(int i=3;i*i<=n;i+=2)
    {
        if(n%i==0)return false;
    }
    return true;
}

// Graph Grid //
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ar[n+3];
        int br[n+3];
        for(int i=0;i<n;i++)cin>>ar[i];
        for(int i=0;i<n;i++)cin>>br[i];
        int mx = 0,mx2=0;
        for(int i=0;i<n;i++)
        {
            if(ar[i]<br[i])
            {
                mx = max(mx,br[i]);
                mx2 = max(mx2,ar[i]);
            }
            else{
                mx = max(mx,ar[i]);
                mx2 = max(mx2,br[i]);
            }
        }
        cout<<mx*mx2<<endl;

    }
}

  */
