#include <iostream>
using namespace std;

int main()
{
    short t;cin >>t;
    while(t--){
        int n,a=10,b=17,temp;cin >> n;
        long sum=0;
        for (int i=0;i<n;i++){
            temp=a/b;
            sum+=temp;
            a%=b;a*=10;
        }
        cout << temp << " " << sum << "\n";
    }
}
