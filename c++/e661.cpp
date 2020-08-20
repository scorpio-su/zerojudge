#include <iostream>
using namespace std;

int main()
{
   int t,k=1; cin >> t;
   while (t--)
   {
       int num;cin >> num;
       int a[num];
       for (int i=0;i<num;i++) cin >> a[i];
       cout << "Case " << k++ << ": " << a[num/2] << "\n";
   }
}
