#include <iostream>
#include <algorithm>
using namespace std;

typedef struct box{
    string l;
    long long int n;
}box;

bool cmp(box a, box b){
    return a.n > b.n;
}

box pos[51];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t;
    while (cin >> t)
    {
        long long int p;
        int k,w,r;
        for (int i =0;i<t;i++){
            cin >> pos[i].l >> p >> k >> w >> r;
            pos[i].n=p*w/k*r;
        }
        sort(pos,pos+t,cmp);
        for (int i =0;i<t;i++) cout << pos[i].l << "\n";
    }

}
