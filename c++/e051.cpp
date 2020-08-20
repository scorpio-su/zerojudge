#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string an,s;
    cin >> s; an=s[0];
    int n=s.size()-1;
    for (int i=1;i<n;i++) an+='_';
    an+=s[n];
    cout << an << endl;
}
