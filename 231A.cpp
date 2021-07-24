#include <bits/stdc++.h> 
using namespace std; 

int main()
{
	int n,x,y,z,total =0;
	cin>>n;

	while(n--){
		cin>>x>>y>>z;
		if ((x+y+z)>=2)
		{
			total++;
		}
	}
	cout<<total<<endl;
	return 0;
}