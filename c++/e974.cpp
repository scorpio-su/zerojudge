#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int R,N,C;
    cin>>R>>C>>N, N--;
    int a[R][C];
    for(int i=0;i<R;i++)
        for(int j=0;j<=C;j++) a[i][j]=i*C+j+1;
    for(int i=0;i<N;i++){
        if (i%2){ //one
            int an[C];for(int j=0;j<C;j++) an[j]=a[R-1][j];
            /*for(int i:an) cout << i << ' ';
            cout << endl;*/
            for(int i{R-1};i>0;i--){
                for(int j{};j<C;j++){
                    a[i][j]=a[i-1][j];
                }
            }
            for(int i{};i<C;i++) a[0][i]=an[i];
        }
        else{ //two
            int an[R]; for(int i{};i<R;i++) an[i]=a[i][C-1];
            /*for(int i:an) cout << i <<' ';
            cout << endl;*/
            for(int i{C-1};i>0;i--){
                for(int j{};j<R;j++){
                    a[j][i]=a[j][i-1];
                }
            }
            for(int i{};i<R;i++) a[i][0]=an[i];
        }
    }
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++) cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}