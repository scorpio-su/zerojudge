#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    while (cin >> n && n) {
        queue<int> qu;
        vector<int> pos;
        if (n == 1){
            cout << "Discarded cards: \nRemaining card: 1\n";
        }else{
            for (int i = 1; i <= n;i++) qu.push(i);
            while (qu.size() !=1){
                pos.push_back(qu.front()); qu.pop();
                qu.push(qu.front()); qu.pop();
            }
            cout << "Discarded cards: ";
            bool ok=false;
            for (int i : pos){
                if (!ok) cout << i;
                else cout << ", " << i;
                ok=true;
            }
            cout << "\nRemaining card: " << qu.front() << "\n";
        }
    }
}