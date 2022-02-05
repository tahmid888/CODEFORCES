#include<bits/stdc++.h>
using namespace std;

int main()
{   int anton=0,danik=0,n;
    string s;
cin>>n;
    cin>>s;
    for( int i=0;i<n;i++)
    { // cin>>s;


        if(s[i]=='A')
        {
            anton++;}

            else if(s[i]=='D')
            {
                danik++;
            }

    }

    if(anton==danik) cout<<"Friendship";
    else if(anton>danik) cout<<"Anton";
    else cout<<"Danik";
}
