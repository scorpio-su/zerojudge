#include <bits/stdc++.h>
#define _for(a,b,c) for(int(a)=(b);(a)<(c);(a)++)
using namespace std;

int gcd(int x,int y){
	if (x<y){
		int temp;
		temp=x; x=y; y=temp;
	} 
	if(x%y){
		gcd(y,x%y);
	}
	else return y;
}

int main ()
{
	int n;
	while (cin >> n)
	{
		int num,max1;
		cin >> num;
		cin >> max1;
		max1=gcd(num,max1);
		_for(i,0,n-2){
			cin >> num;
			max1=gcd(num,max1);
		}
		cout << max1 << endl;
	}
	return 0;
}
