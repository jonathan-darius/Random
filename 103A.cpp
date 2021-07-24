#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	bool a,has=0;
	while(n--){
		cin>>a;
		if (a)
		{
			has = 1;
			cout<<"HARD";
			break;
		}
	}

	if (!has)
	{
		cout<<"EASY";	
	}

	return 0;
}