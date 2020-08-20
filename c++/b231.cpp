#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    while (cin >> t) {
        priority_queue<pair<int,int>> pos;
        //priority_queue<pair<int,int>>::iterator itr;
        for (int s,d;t!=0;--t) {
            cin >> s >> d;
            pos.push({d,s});//make_pair
        }
        //for (itr=pos.begin();itr!=end();itr++) cout << itr->first << itr->second << "\n";
        int maxx=0;//output time
        for(int now=0; pos.size() ; pos.pop())
        {
            //pair<int,int> itr = pos.top();
            now+=pos.top().second;
            maxx=max(maxx,pos.top().first+now);
            //cout << maxx << endl;
            //cout  << itr.first << ' ' << itr.second  << endl;
        }
        cout << maxx << '\n';
    }
}