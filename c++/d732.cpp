#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    map<int,int> pos;
    while(cin >> n >> k){
        pos.clear();
        for(int i=1;i<=n;i++){
            int num;cin >> num;
            pos[num]=i;
        }
        for(int i=0;i<k;i++){
            int num;cin >> num;
            if (pos[num]) cout << pos[num] << "\n";
            else cout << "0\n";
        }
    }
}
