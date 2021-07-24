#include <bits/stdc++.h> 
using namespace std; 

int main()
{
	int n=5;
	bool a=0;
	int x,y;
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= n; ++j)
		{
			cin >>a;
			if (a)
			{
				x = j;
				y = i;
				break;
			}
		}
		if (a)
		{
			break;
		}
	}

	x -= 3;
	y -= 3;

	cout<<abs(x)+abs(y)<<endl;
	return 0;
}