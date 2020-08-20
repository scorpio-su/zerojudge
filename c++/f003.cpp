#include<bits/stdc++.h>
using namespace std;

struct point{
    int x,y;
};

int ab(int a,int b){
    if (a < b) return b-a;
    else return a-b;
}

bool cmp(point p1,point p2){
    if (p1.x == p2.x) return p1.y < p2.y;
    else return p1.x<p2.x;
}

void solve(int n){
    vector <point> ind;
    point data[n];
    for (int i = 0; i < n; ++i) cin >> data[i].x >> data[i].y;
    //for (int i = 0; i < n; ++i) cout <<  data[i].x << data[i].y << '\n';
    int mi=5e8;
    for (int i = 0; i < n; ++i){
        int tep=0;
        for (int j = 0; j < n; ++j){
            if (i == j) continue;
            tep+=ab(data[i].x,data[j].x)+ab(data[i].y,data[j].y);
            //cout << tep << endl;
        }
        if (tep < mi){
            ind.clear();
            ind.push_back(data[i]);
            mi=tep;
        }else if (tep == mi) ind.push_back(data[i]);
    }
    sort(ind.begin(), ind.end(),cmp);
    //cout << ind.size() << ' '<< mi << endl;
    for (auto i:ind) cout << i.x << ' ' << i.y << endl;
    cout << mi << "\n\n";
}

int main(){
    int n;
    while (cin >> n){
        solve(n);
    }
}

