#include <iostream>

using namespace std;

int main()
{
   int n,w,t1[100],t2[100],t3[100],x=0,y=0,z=0,s;
   cin>>n;
   int a[n];
  for(int i=0;i<n;i++)
  {
      cin>>a[i];
  }
  for(int i=0;i<n;i++)
  {
      //cin>>w;
      if(a[i]==1)
      {
          t1[x]=i+1;
          x++;
      }
      else if(a[i]==2)
      {
           t2[y]=i+1;
          y++;
      }
       else if(a[i]==3)
      {
           t3[z]=i+1;
          z++;
      }
  }
        s=min(x,y);
    w=min(s,z);

      cout<<w<<endl;
       for(x=0,y=0,z=0;x<w,y<w,z<w;x++,y++,z++){
           cout<<t1[x]<<" "<<t2[y]<<" "<<t3[z];
          // cout<<t2[y];
          // cout<<t3[z];
  }

    return 0;
}
