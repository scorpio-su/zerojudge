#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    int a[t];
    vector<int> pos;
    bool ok{false};
    for (int i = 0; i < t;i++){
         cin >> a[i];
         if (ok) {
             if (a[i] ==0) a[i]=2;
             ok= false;
             //continue;
         }
         if (a[i] == 9){
             if (a[i-1]==0)a[i-1]=2;
            ok=true;
        }
        if (a[i] == 1) pos.push_back(i);
        //if (a[i] == 1) num2++;
    }
    /*for (int i:a) cout << i <<' ';
    cout << endl;*/
    int num{};
    if (!pos.empty()){
    for (int i=pos.front(); i<pos.back(); i++){
        if (a[i] ==0) num++;
    }
    }
    /*while (pos.size()>1) {
        int i=pos.back()-1;
        pos.pop_back();
        //if (pos.empty()) break;
        int j=pos.back();
        for (;i>j;i--){
            if (a[i] ==0) num++;
        }
    }*/
    cout << num << '\n';
    /*int num{},num3{};
    for(int i = 0,j{}; i < t;i++){
        if(a[i] ==0 && j) ++num;
        if (j && num ) {num3+=num;num=0;
        //ok=true;
        cout << i << '\n';}
        if (a[i] ==1) {
            //ok=!ok;
            j++;
        }
        cout << ok << ' ';
    }
    cout << num3 << endl;*/

    /*bool ok{false};
    for (int i = 0; i < t;i++){
        if (a[i] == 1){
            ok=false;
            bool test{true};
            do{
                if (a[i] ==0) 
                    if (test)num++;
                    else test =true;
                else if (a[i] ==9){
                    if (a[i-1] ==0) num--;
                    test = false;
                }
                i++;
                if (a[i] == 1) ok=true;
                //cout << i << ' ';
            }while (a[i] != 1 && i < t);
            i--;
            //cout << i << ' ';
        }
    }
    if (ok) cout << num << '\n';
    else cout << num-1 << '\n';*/
}