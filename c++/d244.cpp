#include <bits/stdc++.h>
using namespace std;

unordered_map<int, int> mp;

int main(){
    int n;
    while (cin >> n) mp[n]++;

    for (auto i:mp) if (i.second%3) cout <<i.first << '\n';
}