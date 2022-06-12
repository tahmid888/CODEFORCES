#include<algorithm>
#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<functional>
#include<iomanip>
#include<iostream>
#include<map>
#include<numeric>
#include<queue>
#include<set>
#include<stack>
#include<string>
#include<utility>
#include<vector>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 200100
#define pp pair<ll,ll>

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d ",n)
#define pfl(n) printf("%I64d ",n)
#define pfs(s) printf("%s",s)

#define pb push_back

using namespace std;

int main()
{
	//freopen("in.txt", "r", stdin);   copied from master

	int i,j,k;
	int n,m;

	map<int,bool> mp;

	sf(n);
	int a[n];

	for(i=0;i<n;i++)
        sf(a[i]);

    m=0;
    for(i=n-1;i>=0;i--)
    {
        if(mp[a[i]])
            a[i]=-1;
        else
        {
            mp[a[i]]=1;
            m++;
        }
    }

    pf(m);pfs("\n");
    for(i=0;i<n;i++)
    {
        if(a[i]!=-1)
            pf(a[i]);
    }

	return 0;
}




/*


my approach
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;



int main() {
  ios::sync_with_stdio(false);
	cin.tie(0);


    int n,s,count=0;
  cin>>n;

  map<int,int> cnt;
  for(int i=0;i<n;i++)
    {
      cin>>s;
      cnt[s]++;

    }


   for(auto u : cnt)
    {
 count++;
      }
  cout<<count<<endl;

  for(auto u : cnt)
    {
      cout<<u.first<<" ";

    }

  return 0;
  }




*/
