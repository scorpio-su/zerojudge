#include <iostream>

using namespace std;

int main()
{
	float w,h;
	while (cin >> w >> h)
	{
		h=h/100;
		printf("%.1f\n",w/(h*h));
	}
	return 0;
}
