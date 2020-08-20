#include <iostream>
#include <string>
#include <sstream>
using namespace std;

void solve(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int num;
    while (cin >> num){
        string s; cin >> s;
        string ans="";
        stringstream ss;
        int i=0;
        do{
            /*string an1="";
            ss.clear();
            ss.str("");*/
            int n=0; char c=s[i];
            while (c == s[i]) {
                n++; i++;
                if (i ==num) break;
            }
            ans += to_string(n) +c;
            //ss<<n; ss>>an1;  ans+=an1+c;
        }while(i!=num);
        if (ans.length() >= s.length()) cout << s << '\n';
        else cout << ans.c_str() << '\n';
    }
}

int main(){
    solve();
}