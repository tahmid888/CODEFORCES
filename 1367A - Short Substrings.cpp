#include <bits/stdc++.h>

using namespace std;

int main()
{
 int t,i;
 string s;
 cin>>t;

 while(t--){
     cin>>s;
 for(int i=0;i<s.length()-1;i+=2)
 {
      cout<<s[i];
}
cout<<s[s.length()-1]<<endl;
 }


    return 0;
}
