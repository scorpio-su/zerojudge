#include <bits/stdc++.h>
using namespace std;

int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    int a,b,c,a1,b1,c1;
    while (cin >> a >> b >> c >> a1 >> b1 >> c1){
        float x,y,z;
        z=a*b1-b*a1;x=c*b1-c1*b;y=a*c1-c*a1;
        if (z == 0){
            if(x==0&&y==0) cout << "Too many\n";
            else cout << "No answer\n";
        }
        else{
            x/=z;y/=z;
            printf("x=%.2f\ny=%.2f\n",x,y);
        }
    }
}
