#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	char z[n];cin>>z;
	int count =0;
	for (int i = 0; i < n-1; ++i)
	{
		if (z[i]==z[i+1])
		{
			count++;
		}
	}
	cout<<count<<endl;
	return 0;
}