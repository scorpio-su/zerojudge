#include <iostream>
using namespace std;

int main(){
    long long a[81]{1,1,2};
    for (int i = 3; i <81;i++){a[i] = a[i-1] +a[i-2];}
    int num;
    while (cin >> num && num) {cout << a[num] << '\n';}
}