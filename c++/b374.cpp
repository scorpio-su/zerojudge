#include <bits/stdc++.h>
using namespace std;

int main()
{
   int ans[30001];
   int n;
   while (cin >> n)
    {
        //ios_base::sync_with_stdio(false);
        //cin.tie(0); cout.tie(0);
        memset(ans,0,sizeof(ans));
        int num,max1=-1,max2=-1;
        for (int i=0;i<n;i++){
            cin >> num;
            max2=max(num,max2);
            ans[num]++;
            max1=max(max1,ans[num]);
        }
        for (int i=0;i<=max2;i++){
            if (max1 == ans[i]) cout << i << " " << max1 << "\n";
        }
    }
}
