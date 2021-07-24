#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,t; cin>>n>>t;
	char arr[n];cin>>arr;

	while(t--){
		for (int i = 1; i < n; ++i)
		{
			if (arr[i]=='G' and arr[i-1]=='B')
			{
				arr[i] = 'B';
				arr[i-1]='G';
				++i;
			}
		}
	}
	cout<<arr;
	return 0;
}
