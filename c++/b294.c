#include<stdio.h>

int main()
{
    int n;
    while (scanf("%d",&n) != EOF){
        int sum=0,num;
        for(int i=1;i<=n;i++){
            scanf("%d",&num);
            sum+=num*i;
        }
        printf("%d\n",sum);
    }
}
