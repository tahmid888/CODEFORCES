#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios::sync_with_stdio(false);
	cin.tie(0);
  int t;
  cin>>t;
  while(t--)
    {
      int i;

      string s;
      cin>>s;
    bool check =false ;
      int r=0,g=0,b=0;
     for(int i=0;i<s.size();i++)
       {
if(s[i]=='r')
{
  r++;}
         else if(s[i]=='g'){
  g++; }
        else  if(s[i]=='b'){
  b++;
          }

      else if((s[i]=='R' && r==0) || (s[i]=='G' && g==0) || (s[i]=='B' && b==0))
      {
       check=true;

        break;
        }
           }

      if(check)
      {
        cout<<"no"<<endl;
      }
      else {
        cout<<"yes"<<endl;
      }


    }
  return 0;
}
