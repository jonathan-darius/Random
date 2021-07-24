#include <bits/stdc++.h>
using namespace std;

int main(){
	bool count = 1;
	char a;
	while(cin>>a){
		if(count)
		{
			cout<<char(toupper(a));
			count=0;
		}
		else{
			cout<<a;
		}
	}
	cout<<endl;
	return 0;
}