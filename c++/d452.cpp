#include <bits/stdc++.h>
#define _for(a,b,c) for(int(a)=(b);(a)<(c);(a)++)
using namespace std;

int main ()
{
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int a[n];
		_for(i,0,n) cin >> a[i];
		sort(a,a+n);
		int sum=0;
		_for(i,0,n){
			sum+=abs(a[i]-a[n/2]);
		}
		cout << sum << endl;		
	}
	return 0;
}
