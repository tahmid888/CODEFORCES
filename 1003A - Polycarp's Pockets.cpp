#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios::sync_with_stdio(false);
	cin.tie(0);

  int n,i;
  cin>>n;
  int v;

  vector<int>cnt(101);
  for(int i=0;i<n;i++)
    {
      cin>>v;
      ++cnt[v];
    }


cout<<*max_element(cnt.begin(),cnt.end())<<endl;

  return 0;
  }
