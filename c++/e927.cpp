#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int ch[26];
    memset(ch, 0, sizeof(ch));
    char c;
    while (cin >> c) {
        if (c != '\n'){
            ch[int(c-'A')]++;
        }
    }
    for (int i = 0; i < 26;i++){
        for (int j = 0; j <ch[i];j++) cout << char(i+'A');
    }
    cout << '\n';
}