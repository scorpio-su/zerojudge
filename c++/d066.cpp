#include<iostream>
using namespace std;

int main()
{
	int a,b;
	while(cin >> a >> b){
		int m=a*100+b;
		if (730<=m && m < 1700) printf("At School\n");
		else printf ("Off School\n");
	}
	return 0;
 } 
