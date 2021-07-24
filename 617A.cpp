#include <bits/stdc++.h>
using namespace std;


int main(){
	int a; cin>>a;
	int count=0;
	while(a!=0){
		if (a-5>=0)
		{
			a-=5;
		}
		else if (a-4>=0)
		{
			a -=4 ;
		}
		else if (a-3>=0)
		{
			a -=3 ;
		}
		else if (a-2>=0)
		{
			a -=2 ;
		}
		else if (a-1>=0)
		{
			a -=1 ;
		}
		count++;
	}
	cout<<count;
	return 0;
}