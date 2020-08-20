#include <iostream>
using namespace std;

int main(){
    string s;
    while (cin >> s) {
        int num=s.size();
        for (int i=0; i<num/2;i++){
            if (s[i] != s[num-1-i]){
                cout << "no\n";
                return 0;
            }
        }
        cout << "yes\n";
    }
}