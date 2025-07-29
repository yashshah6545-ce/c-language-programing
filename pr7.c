#include<stdio.h>
#define ticket 420
int main()
{
    int children,age;
    printf("Age of a person:");
    scanf("%d",&age);
    if (age<12)
    {
        printf("You are eligible for free entry");
    }
    else
    {
        printf("Your entry fee is %d", ticket);
    }
    return 0;
}
