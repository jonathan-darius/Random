#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	int a,con=1;cin>>a;
	int tamp = a;
	n--;
	while(n--){
		cin>>a;
		if (a != tamp)
		{
			con++;
			tamp = a;
		}
	}
	cout<<con;
	return 0;
}