#include <stdio.h>
const double cap=1e-5;

int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int m,p;
        scanf("%d%d",&m,&p);
        double rat=(double)(p-m)/m*100;
        if (rat>=0.0) printf("%.2lf%% ",rat+cap);
        else printf("%.2lf%% ",rat-cap);
        if (rat >= 10.0 || rat <= -7.0) printf("dispose\n");
        else printf("keep\n");
    }
}
