#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<char,string> pos;
    pos['A']="000000";pos['B']="000001";pos['C']="000010";pos['D']="000011";pos['E']="000100";pos['F']="000101";pos['G']="000110";pos['H']="000111";pos['I']="001000";pos['J']="001001";
    pos['K']="001010";pos['L']="001011";pos['M']="001100";pos['N']="001101";pos['O']="001110";pos['P']="001111";pos['Q']="010000";pos['R']="010001";pos['S']="010010";pos['T']="010011";
    pos['U']="010100";pos['V']="010101";pos['W']="010110";pos['X']="010111";pos['Y']="011000";pos['Z']="011001";pos['a']="011010";pos['b']="011011";pos['c']="011100";pos['d']="011101";
    pos['e']="011110";pos['f']="011111";
    pos['g']="100000";pos['h']="100001";pos['i']="100010";pos['j']="100011";pos['k']="100100";pos['l']="100101";pos['m']="100110";pos['n']="100111";pos['o']="101000";pos['p']="101001";
    pos['q']="101010";pos['r']="101011";pos['s']="101100";pos['t']="101101";pos['u']="101110";pos['v']="101111";pos['w']="110000";pos['x']="110001";pos['y']="110010";pos['z']="110011";
    pos['0']="110100";pos['1']="110101";pos['2']="110110";pos['3']="110111";pos['4']="111000";pos['5']="111001";pos['6']="111010";pos['7']="111011";pos['8']="111100";pos['9']="111101";
    pos['+']="111110";pos['/']="111111";

    //ios::sync_with_stdio(false);
    //cin.tie(0);
    int t,m; cin >> t >> m;
    while (t--)
    {
        string s; cin >> s;
        for (int i=0;i<m/6;i++) cout << pos[s[i]];
        cout << "\n";
    }
}