#include <iostream>
using namespace std;

int main()
{
    int t,n;
    while (cin >> t >> n){
        int a[t][n];
        for (int i=0;i<t;i++){
            for (int j=0;j<n;j++) cin >> a[i][j];
        }
        cout << "AND:";
        for (int i=0;i<n;i++){
            int tes=1;
            for (int j=0;j<t;j++){
                if (tes)
                    if (a[j][i]==1)continue;
                    else {tes=0;break;}
            }
            cout << " " << tes ;
        }
        cout << "\n OR:";
        for (int i=0;i<n;i++){
            int tes=0;
            for (int j=0;j<t;j++){
                if (!tes)
                    if (a[j][i]!=1)continue;
                    else {tes=1;break;}
            }
            cout << " " << tes ;
        }
        cout << "\nXOR:";
        for (int i=0;i<n;i++){
            int tes=0;
            for (int j=0;j<t;j++){
                if (a[j][i]==1) tes++;
            }
            cout << " " << ((tes%2)?'1':'0') ;
        }
        cout << "\n";
    }
}
