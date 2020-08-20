#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    string s;
    while (cin >> s){
        int p=0,ans=0;
        for (int i=0;i<s.size();i++){
            if (s[i]=='y') {ans+=abs(i-p); p+=3;}
        }
        cout << ans << "\n";
    }
}
