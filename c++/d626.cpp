#include <bits/stdc++.h>
#define _for(i,a,b) for (int i=(a);i<(b);i++)
using namespace std;

int n;
char buf[101][101];

void dfs(int a,int b){
    if (a>=0 && b>=0 && a<=n && b<=n && buf[a][b] == '-'){
        buf[a][b]='+';
        dfs(a+1,b); //向右
        dfs(a-1,b); //向左
        dfs(a,b+1); //向下
        dfs(a,b-1); //向上
    }
}

int main(){
    cin >> n;
    _for(i,0,n) _for(j,0,n) cin >> buf[i][j];
    int x,y; cin >> x >> y;
    dfs(x,y);
    _for(i,0,n) {
        _for(j,0,n) cout << buf[i][j];
    cout << '\n';
    }
}