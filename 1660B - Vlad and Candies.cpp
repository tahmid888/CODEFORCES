#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios::sync_with_stdio(false);
	cin.tie(0);


  int t,i;
  cin>>t;
  while(t--)
    {
int n;
      cin>>n;
      vector<int>a(n);
      for(int i=0;i<n;i++)
        {
          cin>>a[i];
        }
        sort(a.begin(),a.end());
          if(n==1)
          {

              if(a[0]>1){
              cout<<"no"<<endl;
               }
              else {
             cout<<"yes"<<endl;
                   }
              }
      else {
            if(n>1){

         if(a[n-1]-a[n-2]>1){
         cout<<"no"<<endl;
        }
        else {
         cout<<"yes"<<endl;
           }

          }
        }
      }
  return 0;
}
