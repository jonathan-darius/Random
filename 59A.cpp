#include <bits/stdc++.h>
using namespace std;

int main()
{
	string a; cin>>a;
	int cap=0,kel=0;

	for (int i = 0; i < a.length(); ++i)
	{
		if (a[i]>='A' && a[i]<='Z')
		{
			cap++;
		}
		else{
			kel++;
		}
	}
	if (kel >= cap)
	{
		for (int i = 0; i < a.length(); ++i)
		{
			cout<< char(tolower(a[i]));
		}
	}
	else{
		for (int i = 0; i < a.length(); ++i)
		{
			cout<< char(toupper(a[i]));
		}
	}
	cout<<endl;
	return 0;
}