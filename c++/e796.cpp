#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,t;
    while (cin >> n >> t){
        long a[n+1];
        memset(a,0,sizeof(a));
        for (int i=0;i<t;i++){
            int fi,en;cin >> fi >> en;
            if (en<fi){ for (int j=en;j<=fi;j++) a[j]+=2;}
            else for (int j=fi;j<=en;j++) a[j]++;
        }
        //for (int i=0;i<=n;i++) cout << a[i] << ' ';
        int indexmin=1,indexmax=1;
        for (int i=1;i<=n;i++){
            if (a[indexmin]>a[i])indexmin=i;
            if (a[indexmax]<=a[i])indexmax=i;
        }
        cout << indexmin << ' ' << indexmax << "\n";
    }

}
