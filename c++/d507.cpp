#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int a[3];
    while (cin >> a[0] >> a[1] >> a[2]){
        sort(a,a+3);
        if(a[2]*a[2] == a[1]*a[1]+a[0]*a[0]) cout << "right triangle\n";
        else if(a[0]*a[0]+a[1]*a[1] < a[2]*a[2]) cout << "obtuse triangle\n";
        else cout << "acute triangle\n";
    }
}