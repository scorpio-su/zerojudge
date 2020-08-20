#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,num; 
    while (cin >> n >> num){
        int data[n];
        memset(data,0,sizeof(data));
        for (int i = 0; i < n; ++i) cin >> data[i];
        //for (int i: data) cout << i << '\n';
        int ma=0;
        for (int i = 0; i <n;i++){
            int num1=0;
            for (int j = 0; j <num;j++) {
                int temp=i+j;
                if (temp>=n) {
                    temp-=n;
                }
                num1+=data[temp];
            }
            //cout << num1 << '\n';
            if (ma<num1) ma=num1;
        }
        cout << ma << '\n';
    }
}