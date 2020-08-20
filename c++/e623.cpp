#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    string pos[4]={"Pen","Pineapple","Apple","Pineapple pen"};
    int num[20001],N=1;
    for (int i = 1; N <= 10000; ++i)
        {
            for (int cate = 0; cate < 4; ++cate)
                for (int j = 0; j < i; ++j)
                    num[N++] = cate;
        }
    while (cin >> n){
        //cout << n << endl;
        cout << pos[num[n]] << endl;
    }
    return 0;
}
