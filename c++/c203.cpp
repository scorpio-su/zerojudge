#include <bits/stdc++.h>
using namespace std;

int adda(int n)
{
    int sum=1;
    for (int i=2;i<n;i++){
        if (!(n%i)) sum+=i;
    }
    return sum;
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t,num;
    cin >> t;
    while (t--)
    {
        cin >> num;
        int num1=adda(num);
        if (num == num1) printf("perfect\n");
        else if (num > num1) printf("deficient\n");
        else printf("abundant\n");

    }

}
