#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n;cin>>n;
	int hasil =0;
	while(n!=0){
		if (n%10 == 4 or n%10==7)
		{
			hasil++;
		}
		n /= 10;
	}

	if (hasil == 4 or hasil == 7)
	{
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}

  	cout<<endl;
	return 0;
}