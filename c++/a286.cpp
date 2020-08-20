#include <bits/stdc++.h>
#define _for(a,b,c) for(int (a)=(b);(a)<(c);(a)++)
#define _eap(a,b,c) for(int (a)=(b);(a)<=(c);(a)++)
using namespace std;

int main()
{
    stringstream ss;
    int ye,mo,nu;
    while(cin >> ye >> mo >> nu)
    {
        string s;
        int n,msum=0,mluky;
        ss >> ye >> mo >> nu;
        ss<<s;
        _for(i,0,s.size()) msum+= s[i]-'0';
        ss.str("");
        mluky = msum%9;
        if(!mluky) mluky=9;
        cin >> n;
        int osum,oluky,abs1=10,nee;
        _eap(i,1,n){
            cin >> ye >> mo >> nu;
            ss >> ye >> mo >> nu;
            ss<<s; ss.str("");
            _for(i,0,s.size()) osum+= s[i]-'0';
            oluky = osum%9;
            if(!oluky) oluky=9;
            if(abs1> abs(mluky-oluky)){ abs1= abs(mluky-oluky); nee=i;}
        }
        cout << nee << endl;
    }
}
