#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    int num;
    if(0<=n && n<6) num=0;
    else if (6<=n && n<12) num=590;
    else if (12<=n && n<18) num=790;
    else if(18<=n && n<60) num=890;
    else num=399;
    cout << num << endl;
}