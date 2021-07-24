#include <iostream>

using namespace std;
int main()
{
    int n;cin>>n;
    int a=0,b=0,c=0,d=0;
    while(a==b || a==c || a==d || b==c || b==d || c==d){
        n++;
        a = n/1000;
        b = n/100%10;
        c = n / 10 % 10;
        d = n%10;
    }
    cout<<n;

    return 0;
}