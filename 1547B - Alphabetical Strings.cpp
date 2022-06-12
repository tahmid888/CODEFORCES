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


      string s;
      cin>>s;
      int pos=-1;
      int ans=0;


      for(int i=0;i<s.size();i++)
        {

          if(s[i]=='a'){
             pos=i;

           break;
            }

          }
          if(pos==-1) {
             cout<<"no"<<endl;
            }

      else {
        i=pos-1;
        j=pos+1;
        char ch='b';
        while(i>=0 || j<s.size())
        {
          if(s[i]==ch){
            ch++;
          i--;}
          else if(s[j]==ch) {
            ch++;
            j++;
          }
            else {
              ans=1;
              break;
            }
        }

        if(ans==1)
          cout<<"no"<<endl;
        else cout<<"yes"<<endl;
      }

        }


  return 0;
}
