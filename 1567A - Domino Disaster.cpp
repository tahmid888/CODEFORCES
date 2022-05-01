#include <bits/stdc++.h>

using namespace std;
#define optimize() ios_base::sync_with_stdio(0);
#define endl '\n'

int main()
{
   optimize();

   int t;
   cin>>t;
   while(t--)
   {
       int n,i;
       cin>>n;
       string s;
       cin>>s;
       for(int i=0;i<s.size();i++)
       {




        if(s[i]=='U'){
       cout<<"D";
       }


        else if(s[i]=='D'){
       cout<<"U";
        }
         else {
       cout<<s[i];
        }


       }

       cout<<endl;

   }


    return 0;
}
