#include <bits/stdc++.h>
#include<string>

using namespace std;

int main()
{
    int t,i,count=0;
    string s;
    cin>>t;
    cin>>s;

    for(int i=0;i<t;i++)
    {
   s[i] = tolower(s[i]);
    }

     sort(s.begin(),s.end());

     for(int i=0;i<t;i++)
     {
         if(s[i]!=s[i+1])
         count++;
     }


      if (count==26)
          cout<<"yES";

       else
      cout<<"NO";


    return 0;
}
