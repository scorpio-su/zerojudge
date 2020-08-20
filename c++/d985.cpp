#include <iostream>
using namespace std;

int main()
{
    short t,n=0;cin >> t;
    while(t--){
        short num,besnum=1000000,sumnum=0,h,m;cin >> num;
        for(int i=0;i<num;i++){
            cin >> h >> m;
            short s=h*60+m;
            besnum=min(s,besnum);
            sumnum+=s;
        }
        cout << "Track " << ++n << ":"<< endl;
        sumnum/=num;
        cout << "Best Lap: " << besnum/60 << " minute(s) " << besnum%60 << " second(s).\n"
            << "Average: " << sumnum/60 << " minute(s) " << sumnum%60 << " second(s).\n\n";

    }
}
