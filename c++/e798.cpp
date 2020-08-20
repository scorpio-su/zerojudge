#include <iostream>
using namespace std;

int a[21][21];

int fourmax(int x, int y){
    int temp=a[x][y];
    for (int i = 0; i <2;i++){
        for(int j = 0; j <2;j++){
            if (temp<a[i+x][j+y]) temp=a[i+x][j+y];
        }
    }
    return temp;
}

int main()
{
    int t ;
    while (cin >> t){
        for (int i=0;i<t;i++)
            for (int j=0;j<t;j++) cin >> a[i][j];
        
        for (int i=0;i<t;i+=2){
            for (int j=0;j<t;j+=2){
                cout << fourmax(i,j) << ' ';
            }
            cout << endl;
        }
    }
}
