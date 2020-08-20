#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int>p;
    short n;
    while(cin >> n){
    p.clear();
        for(int i=n;i>0;i--) p.push_back(i);
        do {
            for(int i=0;i<n;i++) cout << p[i];
            cout << "\n";
        }while(prev_permutation(p.begin(),p.end()));
        //next_permutation() ±q¥k¨ì¥ª

    }

}
