#include <stdio.h>
int main()
{
    int ans[1001]={0,1};
    for (int i=2;i<=1000;i++) ans[i]=ans[i-1]+i;
    int n;
    while (scanf("%d",&n)) printf("%d\n",ans[n]);
}
