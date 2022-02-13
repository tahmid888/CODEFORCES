
#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n,count=0;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
      cin>>a[i];
  }
  sort(a,a+n);


  for(int i=0;i<n-1;i++)
  {
     count=count+(a[n-1]-a[i]);//maximum index value - array index

  }
  cout<<count;

    return 0;
}


/*

#include <iostream>
#include<algorithm>
using namespace std;

int main() {
 	int n;
	cin>>n;
	int arr[n];
	int maxi=0;
	long long answer=0;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		maxi=max(arr[i],maxi);
	}
		for(int i=0;i<n;i++){
          answer+=maxi-arr[i];


		}
		cout<<answer<<endl;


	return 0;
}
*/
