#include <bits/stdc++.h>
using namespace std;

int main(){
	string a;
	cin>>a;
	char temp;

	for (int i = 0; i < (a.length()-1); i+=2)
	{
		for (int j = 0; j < (a.length()-1); j+=2)
			{
				if (a[j]>a[j+2])
					{
						temp = a[j];
						a[j] = a[j+2];
						a[j+2] = temp;
					}			
			}		
	}
	cout<<a<<endl;
	return 0;
}