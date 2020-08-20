#include <bits/stdc++.h>
using namespace std;

int main(){
    /*
    ios::sync_with_stdio(false);
    cin.tie(0);*/
    int h,m,s;
    while(cin >>h >> m >> s){
        printf("%d %d %d.",h,m,s);
        h*=s;
        if (h>=m) printf(" I will make it!\n");
        else printf(" I will be late!\n");
    }
}