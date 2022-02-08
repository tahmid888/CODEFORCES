#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
int vari= n/100;
 int ans=n%100;
vari+=ans/20;
ans=ans%20;
vari+=ans/10;
ans=ans%10;
vari+=ans/5;
ans=ans%5;
vari+=ans/1;
cout<<vari<<endl;
    return 0;
}
