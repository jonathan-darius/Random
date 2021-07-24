#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;cin>>n;
	string a="I hate ",b="I love ";
	for (int i = 0; i < n; ++i)
	{
		if (i%2==0)
		{
			cout<<a;
		}
		else{
			cout<<b;
		}
		if(i!=n-1){
		cout<<"that ";}
	}
	cout<<"it";

	cout<<endl;
	return 0;
}