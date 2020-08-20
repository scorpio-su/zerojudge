#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int a,b,c;
    while (cin >> c >> a){
        if (c == a) a=3;
        b=c-a;
        if (a>b) swap(a,b);
        printf("%d+%d=%d\n",a,b,c);
    }
}