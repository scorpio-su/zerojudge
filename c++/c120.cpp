#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    int temp; // 可以進位的數
    int m;// 共有m位
    int x; //乘完的數
    int ans[10000];
    while (cin >> n){
        cout << n << "!" << endl;
        memset(ans,0,sizeof(ans));
        ans[0]=1;
        temp=0; m=1;
        for(int i=1;i<=n;i++){
            for(int j=0;j<m;j++){//單次乘完
                x=ans[j]*i+temp;
                temp=x/10;
                ans[j]=x%10;
            }

            while (temp>0){//前面的數
                ans[m]=temp%10;
                temp/=10;
                m++;
            }
        }
        for(int i=m-1;i>-1;i--) cout << ans[i];
        cout << endl;
    }

    return 0;
}


