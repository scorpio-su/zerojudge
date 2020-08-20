#include <iostream> 
using namespace std;

int main ()
{
	int a,b,c,d;
	while (cin >> a >> b >> c >> d)
	{
		if (b!=c){
			cout << "Error" << endl;
			continue;
		}
		else{
			long line1[a][b],line2[c][d],line3[a][d];
			for (int i=0;i<a;i++)
				for (int j=0;j<b;j++)
				 	cin >> line1[i][j];
			for (int i=0;i<c;i++)
				for (int j=0;j<d;j++)
				 	cin >> line2[i][j];
			for (int i=0;i<a;i++)
				for (int j=0;j<d;j++)
				{
					line3[i][j]=0;
					for (int k=0;k<c;k++)
						line3[i][j]+=(line1[i][k]*line2[k][j]);
				}
			for (int i=0;i<a;i++){
				for (int j=0;j<d;j++)
				 	cout <<  line3[i][j] << " ";
				cout << endl;
			}
		}
	}
	return 0;
}
