#include <iostream>
using namespace std;

int main(){
	int num;
	while (cin >> num){
		int sum =0;
		for (int i=1;i<num;i++) sum+=i;
		cout << sum+1 << endl;
	}
	return 0;
} 
