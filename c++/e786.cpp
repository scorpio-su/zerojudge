#include <iostream>
#include <cstring>
using namespace std;

int main(){
    string s;
    while (cin >> s) {
        int num{s.size()};
        if (num%2) cout << "NO\n";
        else{
            bool ok{true};
            string str="";
            for (int i = 0; i < num/2 && ok;i++){
                if (s[i] != s[num-i-1]) ok = false;
                str+=s[i];
            }
            if (ok) cout << "YES\n" << str << "\n";
            else cout << "NO\n";
        }
    }
}