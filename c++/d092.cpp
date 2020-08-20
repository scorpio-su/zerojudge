#include <bits/stdc++.h>
#define _for(i,a,b) for(int i=(a);i<(b);i++)
using namespace std;

struct point{
    int num,n1;
};

bool cmp(point p1, point p2){
    if (p1.num == p2.num) return p1.n1>p2.n1;
    else return p1.num>p2.num;
}

int main(){
    int n;
    int x,y;
    while (scanf("%d",&n)==1 && n){
        point a[n];
        _for(i,0,n){
            cin >> x >> y;
            a[i].num = x+y;
            if(x == y) a[i].n1=1;
            else if(x < y) a[i].n1=2;
            else if (x>y) a[i].n1=0;
        }
        sort(a,a+n,cmp);
        char s[3]={'>','=','<'};
        _for(i,0,n) printf("%c%d ",s[a[i].n1],a[i].num);
        cout << '\n';
    }
}
