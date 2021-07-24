#include <bits/stdc++.h> 
using namespace std; 

int main()
{
	int a; cin>>a;
	string z;
	while(a--){
		cin>>z;
		if (z.length() >10)
		{
			cout<<z[0] << (z.length()-2) << z[z.length()-1];
		}
		else{
			cout<<z;
		}
		cout<<endl;
	}
	
	return 0;
}