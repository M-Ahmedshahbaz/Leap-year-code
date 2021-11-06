#include<stdio.h>
int main()

{
    int y;

    printf("please enter the you want to check is a leap year or not\n");
    scanf("%d", &y);
    if(y%4==0){printf("the year is leap");}
    else
    {
        printf("the year is not leap year");
    }
return 0;
}
