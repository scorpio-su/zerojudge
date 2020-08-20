#include <bits/stdc++.h>
#define _for(i,a,b) for (int i=(a);i<(b);i++)
using namespace std;

int main(){
    int num;
    for (int i=1;scanf("%d",&num)==1;i++){
        if (num <0) break;
        int n;
        _for(j,0,15) if(pow(2,j)>=num) {n=j; break;}
        printf("Case %d: %d\n",i,n);
    }
}
