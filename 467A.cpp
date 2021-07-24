#include <bits/stdc++.h>
using namespace std;
 
int main(){
	int n; cin>>n;
	int p,q;
	int ttl=0;
	while(n--){
		cin>>p>>q;
		if ((q-p)>=2)
		{
			ttl++;
		}
	}

	cout<<ttl<<endl;
	return 0;
}