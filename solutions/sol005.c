#include <stdio.h>
int main() {
    int num;
    int fact=1;
    printf("Enter the Number:");
    scanf("%d",&num);
    if(num==0)
    {
        printf("\n Factorial is :1");
    }
    else{
    for(int i=1;i<=num;i++)
    {
       fact=fact*i;
    }
    printf("Factorial is :%d",fact);
    }
    return 0;
}
