#include <iostream>
using namespace std;

int main(){
    string s;
    while (cin >> s){
        for (int i = 0; i < s.length()-1;i++){
            cout << int(s[i]) << '_';
        }
        cout << int (s[s.length()-1]) << '\n';
    }
}