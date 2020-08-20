#include <iostream>
using namespace std;

int main ()
{
	long a,b;
	while (cin >> a >> b)
	{
		for (;;)
		{
			int c= a%b;
			if (c == 0){
				cout << b << endl;
				break;
			}
			else {
				a=b;
				b=c;
			}
		}
	}
	return 0;
}
