#include <iostream>
#include <iomanip>
#include<algorithm>
#include<cstring>
#include <string>
#include<cctype>

#define _for(i,a,b) for(int i = (a); i <(b);i++)
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s;
    int ch[26];
    while (getline(cin, s)) {
        //transform(s.begin(),s.end(),s.begin(),tolower);
        memset(ch,0,sizeof(ch));
        int num=0;
        for (int i = 0; i < s.size(); i++){
            if (s[i] == ' ') continue;
            num++;
            if (isupper(s[i])) s[i]=tolower(s[i]);
            ch[int(s[i]-'a')]++;
        }
        for (auto i:ch) cout << i << ' ';
        cout << endl;
        for (auto i:ch) cout << fixed << setprecision(2) << i*100.0/num << ' ';
        cout << endl;
    }
}