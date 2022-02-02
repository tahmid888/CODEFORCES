

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, count=0;

    string s;


    cin>>s;
    for(int i=0;i<s.length();i++)

    {
        if(s[i]=='4' || s[i]=='7'){
         count++;}


      }
      if(count==4 || count==7)

        {
            cout<<"YES";
        }
        else {cout<<"NO";}




    return 0;
}
/*
int main() {   // number counting by digits

    int num, temp;
    int count = 0;
    int d1=4,d2=7;


    cin >> num;


    temp = num;

    while(temp != 0) {


        count++;


        temp /= 10;
    }




    if(count==d1 || count==d2)
{
    cout<<"YES"<<endl;
}
else {cout<<"NO"<<endl;}



    return 0;
}

*/
