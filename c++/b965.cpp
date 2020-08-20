#include <iostream>
using namespace std;
int a[10][10],b[10][10];
void mirror (int r,int c){
    for (int i=0;i<c;i++){ //¤W¤U 
	  for (int j=0, k=r-1;j<r;j++,k--)
	   b[j][i]=a[k][i];
	}
	for (int i=0;i<r;i++){
		for (int j=0;j<c;j++)
		  a[i][j]=b[i][j];
	}
}
void rotate (int r,int c){//­ËÂà 
	 for (int i=0;i<r;i++){
		for (int j=0;j<c;j++){
			b[j][i]=a[i][j];
		}
	}
	for (int i=0;i<c;i++){
		for (int j=0,k=r-1;j<r;j++,k--)
		  a[i][j]=b[i][k];
	}
}

int main ()
{
	int r, c, m;
	while (cin >> r >> c >> m)
	{
		int path[m];
		for (int i=0;i<r;i++){
			for (int j=0;j<c;j++)
				cin >> a[i][j];
		}
		for (int i=0;i<m;i++) cin >> path[i];
			for (int i=m-1;i>=0;i--){
			if (path[i] == 0){
			 rotate(r,c);
			 int temp=r;
			 r=c;
			 c=temp;
			 }
		    else
		     mirror (r,c);
	    }
	    cout << r << " "<< c << endl;
	    for(int i=0;i<r;i++){
		    cout << a[i][0];
		    for(int j=1;j<c;j++){
			    cout << " " << a[i][j];
	    	}
		    cout << endl;
	    }
   }
	return 0;
}
