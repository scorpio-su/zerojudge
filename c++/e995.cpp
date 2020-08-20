#include <iostream>
#include <string>
using namespace std;

int main(){
    long long n=5e5;
    string s;
    for (int i = 0; i <n;i++) s+=to_string(i);
    cout << s.size()<< endl;
    /*long num;
    while (cin >> num){
        cout << s[num] << '\n';
    }*/
}