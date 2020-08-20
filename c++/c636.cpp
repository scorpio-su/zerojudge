#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string wd[12]={"½Þ","¹«","¤û","ªê","¨ß","Às","³D","°¨","¦Ï","µU","Âû","ª¯"};
    for (int n; cin>> n && n;){
        if (n<0) {n%=12;n+=13;}
        cout << wd[n%12] << "\n";
    }

}
