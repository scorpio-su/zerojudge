#include <bits/stdc++.h>
#define _for(a,b,c) for(int (a)=(b);(a)<(c);(a)++)
#define _eap(a,b,c) for(int (a)=(b);(a)<=(c);(a)++)
using namespace std;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(0); cout.tie(0);
   int ans[4],ans1[10],num;
    while (cin >> num){
        memset(ans,0,sizeof(ans));
        memset(ans1,0,sizeof(ans1));
        ans[0]=num; ans1[num]++;
        _for(i,1,4) {cin >> ans[i]; ans1[ans[i]]++;}
        //_for(i,0,10) {cout << ans1[i] << " ";}
        cin >> num;
        _for(z,0,num){
            int a,b; a=b=0;
            int ges1[10],ges[4]; memcpy(ges1,ans1,sizeof(ges1));
            bool tes[4]; memset(tes,false,sizeof(tes));
            _for(i,0,4) {
                cin >> ges[i];
                if (ges[i] == ans[i]) {a++; ges1[ges[i]]--; tes[i] = true;}
            }
            _for(i,0,4) {
                if (ges1[ges[i]]!=0 && !tes[i]) {b++;ges1[ges[i]]--;}
            }
            printf("%dA%dB\n",a,b);
        }
    }
   return 0;
}
