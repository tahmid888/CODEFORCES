#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios::sync_with_stdio(false);
	cin.tie(0);
  int t,i,j;
  cin>>t;
  while(t--)
    {
   int n, first,second;
   cin>>n;
   vector<int>v(n);
   vector<int>odd;
      for(int i=0;i<n;i++)
        {
          cin>>v[i];
          }
          for(int i=0;i<n;i++)
        {
            if(v[i]%2==0){

            cout<<v[i]<<" ";
            }

          else {
              odd.push_back(v[i]);
          }
          }


        for(auto u:odd)
        {
            cout<<u<<" ";
        }
        cout<<endl;


    }
    return 0;
}
