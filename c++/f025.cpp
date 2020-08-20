#include <bits/stdc++.h>
using namespace std;

int num;
char a[500][500];
int n,m;

void dfs(int x,int y){
    if (a[x][y]!='*' && x>-1 && y>-1 && y<=n && x<= m){
        num+=int(a[x][y]-'0');
        a[x][y]='0';
        dfs(x+1,y);
        //dfs(x-1,y);
        //dfs(x,y-1);
        dfs(x,y+1);
    }
}

int main(){
    while (cin >> n >> m){
        num=0;
        memset(a,0,sizeof(a));
        for (int i = 0; i <n;i++) for(int j = 0; j <m;j++) cin >> a[i][j];
        dfs(0,0);
        cout << num << endl;
    }
}