#include<stdio.h>

int main()
{
    int y;
    while (scanf("%d",&y) && y){
        if(!(y%400) || !(y%4) && y%100) printf("a leap year\n");
		else printf("a normal year\n");
    }
}
