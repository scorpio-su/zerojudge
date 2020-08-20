#include <bits/stdc++.h>
using namespace std;

int main(){
    array <float,4> data {1, 30.9, 0.28, 34.5};
    float num,m;
    float num1;
    int n;
    char c;
    while (cin >> num) {
        cin >> m >> c;
        if (c == 'T') n=0;
        else if (c == 'U')n=1;
        else if (c == 'J')n=2;
        else if (c == 'E')n=3;
        num1 = num/data[n] - m;
        if (num1<0) cout << "No Money\n";
        else if (num1<0.05 && num1>=0) cout << c << " 0.00\n";
        else printf("%c %.2f",c,num1);
    }

}