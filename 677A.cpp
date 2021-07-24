#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,h,i,total=0; cin >>n>>h;
	while(n--){
		cin>>i;
		if (i>h)
		{
			total++;
		}
		total++;
	}
	cout<<total<<endl;
	return 0;
}