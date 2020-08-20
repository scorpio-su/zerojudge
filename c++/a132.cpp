#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    while (cin >> num){
        if(!num) break;
        string s="",s2="";
        int cou=0;
        while (num !=0){
            if(num%2) cou++;
            s+=char(num%2+'0');
            num/=2;
        }
        for(int i=s.size()-1;i>=0;i--) s2+=s[i];
        cout << "The parity of " << s2 << " is " << cou << " (mod 2).\n";
        //printf("The parity of %c is %d (mod 2).\n",s2.c_str(),cou);
    }
    return 0;
}
