#include <iostream>
using namespace std;

int main()
{
	int num,n,k;
	cin >> num;
	while(num--){
		cin >> n >> k;
		long long ans=1;
		for (int i=n; i>k ;i--) ans*=i;
		for (int i=1;i<=n-k;i++) ans/=i;
		cout << ans << endl;
	}
	return 0;
}
