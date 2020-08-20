#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s,a[501];
    int i=1;
    while (getline(cin,s)){
        bool tes=false;
        a[i]=s;
        for(int k=0;k<i;k++){
            if(a[k] == s){
                tes=true; break;
            }
        }
        ++i;
        cout << ((tes)? "YES\n" : "NO\n");
    }
    return 0;
}

