#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,z; cin>>n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>z;
		arr[z-1]=i+1;
	}
	for(auto c:arr){
		cout<<c<<" ";
	}

	return 0;
}