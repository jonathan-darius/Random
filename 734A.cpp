#include <bits/stdc++.h>
using namespace std;

int main(){
	long n; cin>>n;
	char x;
	int a=0,b=0;
	while(n--){
		cin >>x;
		if (x=='A')
		{
			a++;
		}
		else if(x=='D'){
			b++;
		}
	}
	if(a==b){
		cout<<"Friendship";
	}
	else if(a>b){
		cout<<"Anton";
	}
	else{
		cout<<"Danik";	
	}



	cout<<endl;
	return 0;
}