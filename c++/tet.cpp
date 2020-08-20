#include <iostream>
#include <cmath>
using namespace std;

int main(){
   int t; cin >> t;
   while (t--){
       int num; cin >> num;
       if (num != 0){
            int sum=1;
            bool test=false;
            while (num>0){
                if (num%10 == 0){
                    test=true;
                    break;
                }
                else{sum *=num%10;}
                num/=10;
            }
            if (test){cout << "0";}
            else cout << sum;
            cout << "\n";
            }
        else cout <<"0\n";
    }
}