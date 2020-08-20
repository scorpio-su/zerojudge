#include <bits/stdc++.h>
using namespace std;

struct box {
    int a;
    int ch;
    int sum1;
};

bool cmp(box a, box b) {
    if (a.sum1 ==  b.sum1){
        if (a.ch == b.ch) return a.a < b.a;
        return a.ch > b.ch;
    }
    else return a.sum1 > b.sum1;
}

int main(){
    int n;
    while (cin >> n){
        box ans[n];
        for (int i = 1; i<=n; i++){
            int n1, n2,n3; cin >> n1 >> n2 >> n3;
            ans[i-1].a=i; ans[i-1].ch=n1; ans[i-1].sum1=n1+n2+n3;
        }
        sort(ans,ans+n,cmp);
        for (int i=0; i<5; i++){
            cout << ans[i].a << " " << ans[i].sum1 << '\n';
        }
    }
}