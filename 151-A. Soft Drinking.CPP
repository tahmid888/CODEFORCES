#include <bits/stdc++.h>
using namespace std;

int main() {
ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
   int n, k, l, c, d, p, nl, np;
   cin>>n>>k>>l>>c>>d>>p>>nl>>np;

  int first=k*l;
  int next=first/nl;
  int  sec=c*d;
  int  third=p/np;
    int mini=min(min(next,sec),third);
   int divi=mini/n;
   cout<<divi<<endl;


   return 0;
}
