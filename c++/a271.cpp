#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    long pos[5],m;
    string s;
    stringstream ss;
    cin >> t;
    while (t--){
        cin >> pos[1] >> pos[2] >> pos[3] >> pos[4] >> pos[0] >> m;
        //cout << m << endl;
        //for(int i=0;i<5;i++) cout << pos[i] << " ";
        //cout << endl;
        int num;
        cin.ignore();
        getline(cin,s);
        //ss.clear(); //有問題
        //ss<<s;
        //cout << s << endl;
        int ps=0,len1=s.size(),i=0; //中毒
        //bool tes=false; // 中毒狀況
        while (i<len1){
            num=s[i]-'0';
            //cout << num << endl;
            m-=ps;
            //cout << m << " ";
            if (m<=0) break;
            if (num == 3) m-=pos[num];
            else if (num == 4) {ps+=pos[0];m-=pos[num];}
            else if (num == 1 || num == 2) m+=pos[num];
            i+=2;
            if (m<=0) break;
        }
        if (m<=0) printf("bye~Rabbit\n");
        else printf("%dg\n",m);

    }
    return 0;
}
