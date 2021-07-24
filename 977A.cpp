#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,n;cin>>a>>n;

	while(n--){
		if (a%10 == 0)
		{
			a /= 10;
		}
		else{
			a -= 1;
		}
	}	

	cout<<a<<endl;
	return 0;
}