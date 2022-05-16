#include <bits/stdc++.h>
using namespace std;


int main() {
 int t;
  cin>>t;
  while(t--)
    {
      int n,count=0;
      int mini;
      cin>>n;
      vector<int>a(n);
      for(int i=0;i<n;i++)
        {
          cin>>a[i];
        }

      for(int i=0;i<n;i++)
        {
           mini=*min_element(a.begin(),a.end());

         if(a[i]!= mini){
            count++;}


    }
       cout<<count<<endl;
}

  return 0;
  }
