#include <bits/stdc++.h>
using namespace std;

int main() {
int c1=0,c2=0;
  int n,i;
  cin>>n;
  string s;
  cin>>s;
  for(int i=0;i<n;i++)
    {



  if(s[i]=='L')
  {
   c1++;

  }
  else if(s[i]=='R')
  {
   c2++;

    }

      }
  int c3=c1+c2;
  cout<<c3+1<<endl;

  return 0;
  }
