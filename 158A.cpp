#include <bits/stdc++.h> 
using namespace std; 

int main()
{
	int n,k;cin>>n>>k;
	int arr[n+1];
	int hasil = 0;
	for (int i = 1; i <= n; ++i)
	{
		cin>>arr[i];
	}
	
	for (int i = 1; i <=n; ++i)
	{
		if (arr[i] >= arr[k] and arr[i])
		{
			hasil++;
		}
	}
	cout<<hasil;
	cout<<endl;
	return 0;
}