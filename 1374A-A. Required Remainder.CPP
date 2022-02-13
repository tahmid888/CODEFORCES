#include<bits/stdc++.h>
using namespace std;

void func(){
    long long x , y , n ;
    cin >> x >> y >> n ;
    long long q = n / x ;
    long long re = x * q + y ;
    if (re > n){
        re -= x ;
    }
    cout << re << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    int t ;
    cin >> t;
    for(int i = 0 ; i < t ; i ++){
        func();
    }

    return 0 ;
}



/*
                     hard...aff
#include <iostream>

using namespace std;


long long func(long long x,long long y)
{
    if(y==0)
        return 0;

    long long temp=func(x,y/2);
     if(y%2==1)
     return temp*temp*x;
     else temp*temp;


}


int main()
{
    int t;
   long long x,y,n,q,re;
    cin>>t;
    while(t--){
        cin>>x>>y>>n;

       q=n/x;
      re=n%x;

        if(re>=y)
        {
            cout<<q*x+y;
        }
        else {
            cout<<(q-1)*x+y;

        }

    }


    return 0;
}

*/
