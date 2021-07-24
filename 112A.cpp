#include <bits/stdc++.h> 
using namespace std; 

int main()
{
	string a,b;
	cin>>a;
	cin>>b;
	bool has = 1;
	for (int i = 0; i < a.length(); ++i)
	{
		a[i] = tolower(a[i]);
		b[i] = tolower(b[i]);
		if (a[i]!=b[i])
		{
			if (int(a[i]) > int(b[i]))
			{
				cout<<1;
				has = 0;
				break;
			}
			else{
				cout<<-1;
				has = 0;
				break;
			}
		}
	}
	if(has){
		cout<<0;
	}

	
	return 0;
}