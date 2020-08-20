#include <iostream>
using namespace std;

int main()
{
    const short n=4;
    int tes=0,t=2;
    while (t--){
        int ma=0,ca=0,num;
        for (int i=0;i<n;i++) {cin >> num; ma+=num;}
        for (int i=0;i<n;i++) {cin >> num; ca+=num;}
        cout << ma << ":" << ca << endl;
        if (ma>ca) tes++;
        else tes--;
    }
    if (!tes) cout << "Tie\n";
    else if (tes>0) cout << "Win\n";
    else cout << "Lose\n";
}

