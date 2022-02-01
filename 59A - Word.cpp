
#include <bits/stdc++.h>

using namespace std;

int main()
{ int i,up=0,low=0;
  char s[100];
  cin>>s;


  for(int i=0;i<strlen(s); i++)
  {


      if(isupper(s[i]))
     up++;

       else if(islower(s[i]))
      low++;}

 for(int i=0;i<strlen(s); i++)
  {

      if(low<up)
     putchar(toupper(s[i]));
     else if(low>up)
      putchar(tolower(s[i]));
      else if(low==up)
       putchar(tolower(s[i]));

  }





    return 0;
}

