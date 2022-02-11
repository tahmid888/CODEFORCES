
#include <iostream>

using namespace std;

int main()
{

   int t,count=0;
   cin>>t;
   int a[t];
   for(int i=0;i<t;i++)
   {
    cin>>a[i];
   }
   int max=a[0],min=a[0];


   for(int i=0;i<t;i++)
   {
       if(a[i]>max) {
       max=a[i];
       count++;}

       if(a[i]<min){
       min=a[i];
        count++;
       }

   }
   cout<<count;

    return 0;
}
