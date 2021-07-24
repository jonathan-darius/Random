#include <bits/stdc++.h>
using namespace std;

int main(){
	string str;cin>>str;
	
	sort(str.begin(), str.end());
    auto res = unique(str.begin(), str.end());
  	int p = (string(str.begin(), res).length())%2;

  	if (p==0)
  	{
  		cout<<"CHAT WITH HER!";
  	}
  	else{
  		cout<<"IGNORE HIM!";	
  	}

  	cout<<endl;
	return 0;
}