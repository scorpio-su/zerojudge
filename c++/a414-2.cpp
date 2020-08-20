#include<stdio.h>

int main()
{
    int num;
    while (scanf("%d",&num)&&num){
        int coun=0;
        while(num%2){
            coun++;
            num/=2;
        }
        printf("%d\n",coun);
    }
}
