#include <iostream>

using namespace std;

int main()
{

     int t,n,p=0,c=0;
     cin>>t;

    for(int i=0;i<t;i++)
    {  cin>>n;
         if(n>0){
         p+=n;

         }
         else {

             if(p<1){

         ++c;
             }


         else {--p;}
    }
    }

    cout<<c;

    return 0;
}
