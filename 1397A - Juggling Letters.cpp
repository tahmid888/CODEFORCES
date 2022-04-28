#include <bits/stdc++.h>
using namespace std;
int main() {
  long long t;
  cin>>t;
  read:
  while(t--)
    {  long long count[26];
      long long  n;
      cin>>n;


      string s;

memset(count,0,sizeof(count));
       for( long long i=0;i<n;i++)
      {
        cin>>s;
      for( long long j=0;j<s.length();j++)
      {
          count[s[j]-'a']++;

      }

      }
      for( long long i=0;i<26;i++)
      {
        if(count[i]%n)
        {
          cout<<"NO"<<endl;

          goto read;
        }

        }
      cout<<"YES"<<endl;

    }
  return 0;
}
