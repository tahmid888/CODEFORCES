#include <bits/stdc++.h>
using namespace std;


int main() {
  int d1,d2,d3,mini;
  cin>>d1>>d2>>d3;

    int a1= d2+d3+d3+d2;

    int a2=d1+d2+d3;

    int a3=d1+d3+d3+d1;
  int a4=  d1+d2+d2+d1;

  mini=min(a1,min(a2,min(a3,a4)));
  cout<<mini<<endl;
}
