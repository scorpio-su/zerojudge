#include <bits/stdc++.h>
#define _for(i,a,b) for (int i=(a);i<(b);i++)
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
   int n,x,y,z; cin >> n;
   while (n--){
       cin >> x >> y >> z;
       int num = 0,sum = 0;
       if (y<=z) 
        if (x<=y){cout << "1\n";continue;}
        else{cout << "Poor Snail\n"; continue;}
       while (1){
           num++;
           sum += y;
           if (sum>=x)break;
           sum-=z;
       }
       cout << num << '\n';
    } 
}
