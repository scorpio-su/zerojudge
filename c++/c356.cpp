#include <bits/stdc++.h> 
using namespace std;

int main(){
	int n;
	cin >> n;
	char c;
	for (int i=0;i<n*n+1;i++){
		c=getchar();
		if ((i-1)%(n+1)==0){
			putchar(c);
		}
	}
}
