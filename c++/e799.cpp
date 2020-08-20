#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    while (cin >> n >> m){
        char c; cin >> c;
        while (n--){
            long long int num; cin >> num;
            string s="";
            for (int i=0;i<m;i++){
                if (num%2)s+='1';
                else s+='0';
                num/=2;
            }
            //cout << s << endl;
            for(int i=m-1;i>=0;i--){
                if (s[i] == '1') cout << c << " ";
                else cout << ". ";
            }
            cout << "\n";
        }
    }
}
