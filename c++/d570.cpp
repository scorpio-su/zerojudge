#include <bits/stdc++.h>
using namespace std;

int main()
{
    long num;
    while (cin >> num){
        while (num !=0){
            printf("%d\n",num);
            num/=10;
        }
    }
    return 0;
}
