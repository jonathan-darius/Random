#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,a,b; cin>>n;
	int pen =0,maks=0;;
	while(n--){
		cin>>a>>b;
		pen -=a;
		pen += b;
		maks = max(pen,maks);
	}
	cout<<maks;

	cout<<endl;
	return 0;
}