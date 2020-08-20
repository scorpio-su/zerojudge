#include <iostream>
using namespace std;

struct box{
    int n,num;
};

int main(){
    int n1;
    while (cin >> n1){
        box a[n1];
        int max1=-1,num2=0;
        for (int i=0;i<n1;i++) a[i].n=a[i].num=0;
        for (int i=0;i<n1;i++){
            int num1; cin >> num1;
            bool tes=true;
            for (int j=0;j<num2;j++){
                if (a[j].n == num1) {
                        a[j].num++;
                        max1=max(max1,a[j].num);
                        tes=false;
                        break;
                }
            }
            if (tes) {a[num2++].n=num1;}
        }
        cout << num2 << "\n";
        if (max1==-1) cout << "NO\n";
        else {
            for(int i=0;i<num2;i++) {
                if (a[i].num==max1) cout << a[i].n << ' ';
            }
            cout << "\n";
        }
    }
}
