#include <iostream>
using namespace std;

int main(){
    int n;
    while (cin >> n){
        int num=1;
        for (int i = 0; i <n;i++){
            if (i%2){
                for (int j =n-1;j>-1;j--) cout << num +j << ' ';
            }else{
                for (int j=0;j<n;j++) cout << num+j << ' ';
            }
            num+=n;
            cout << "\n";
        }
        cout << '\n';
    }
}