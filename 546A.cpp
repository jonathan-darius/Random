#include <bits/stdc++.h>
using namespace std;

int main(){
	long k,n,w; cin>>k>>n>>w;
	long total =0;
	for (long i = 1; i <= w; ++i)
	{
		total += (k*i);
	}
	total -= n;
	if (total<0){
		cout<<0;
	}
	else{
	cout<<total;
	}
	cout<<endl;
	return 0;

}