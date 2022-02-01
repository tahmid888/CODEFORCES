/*#include <bits/stdc++.h>   //something wrong in this area

using namespace std;

int main()
{
   char  s[50];
   int hash[128] = { 0 },c=0,i;
   cin>>s;

   for(int i=0;i<strlen(s);i++)
   {
       hash[s[i]] = 1;
   }
  for (int i = 0; i < 128; ++i) {
		c += hash[i];
	}

   if(c%2 ==0) cout<<"CHAT WITH HER!"<<endl;
   else cout<<"IGNORE HIM!"<<endl;
    return 0;
}
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{  int i,count=0;
  string s;
  cin>>s;
  sort(s.begin(),s.end());

  for(int i=0;i<s.length();i++)
  {
      if(s[i] != s[i+1]){
      count++; }
  }
   if(count %2 ==0)  cout<<"CHAT WITH HER!"<<endl;
   else cout<<"IGNORE HIM!"<<endl;

}
