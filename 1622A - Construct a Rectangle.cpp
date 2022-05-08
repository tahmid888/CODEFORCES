#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--)
    {
      int n=3;
     int a[n];
      for(int i=0;i<n;i++)
        {
          cin>>a[i];
        }
      sort(a,a+n);

        if(a[0] %2 ==0 && a[1]==a[2]){
          cout<<"yes"<<endl;
        }
     else  if(a[2] %2 ==0 && a[0]==a[1]){

          cout<<"yes"<<endl;
        }
      else if( a[2]==a[0]+a[1]){
          cout<<"yes"<<endl;
        }
      else {cout<<"no"<<endl;}

        }


  return 0;
  }
