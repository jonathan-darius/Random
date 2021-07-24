#include <bits/stdc++.h>
using namespace std;

int main(){
	string a,b; 
	cin>>a;
	cin>>b;
	bool has=true;
	if (a.length() == b.length())
	{
		for (int i = 0; i < a.length(); ++i)
		{
			
			if (a[i]!=b[b.length()-i-1])
			{
				has = false;
				break;
			}
			
		}
	}
	else{
		has = false;
	}

	if (has)
	{
		cout<<"YES";
	}
	else{
		cout<<"NO";	
	}

	cout<<endl;
	return 0;
}