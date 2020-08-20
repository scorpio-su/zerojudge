#include <iostream>
#include <string>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    long long int h,m,s;
    string ans="";
    cin >> h >> m >> s;
    m+=s/60; h+=m/60;
    s%=60; m%=60;
    if (h>=24) h%=24;
    if (h<10) ans+='0';
    ans+= to_string(h) +':';
    if (m<10) ans+='0';
    ans+= to_string(m) +':';
    if (s<10) ans+='0';
    ans+= to_string(s);
    cout << ans << '\n';
}