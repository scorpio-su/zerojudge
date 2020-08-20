#include <bits/stdc++.h>
#define _for(a,b,c) for(int (a)=(b);(b)<(c);(a)++)
using namespace std;

int main ()
{
    int c, n;
    while (cin >> c >> n)
    {
        int po[n],num=100;
        for(int i=0;i<n;i++) cin >> po[i];
        sort(po,po+n);
        int t1=c;
        //for(int i=0;i<n;i++) cout <<  po[i] << " " ;
        //cout << endl;
        for (int t=n-1;t>=0;t--){
            n=t;
            c=t1;
            int num1=0;
            while (n>=0){
                if ((c-(po[n]))>=0){
                    num1+=(c/po[n]);
                    c-=(po[n]*(c/po[n]));
                }
                n--;
            }
            num=min(num1,num);
        }
        cout << num << endl;
    }
    return 0;
}
