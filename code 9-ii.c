//Program to print cubes of the first N natural numbers

#include<stdio.h>
int main()
{
    int N,i=1;
    printf("Enter the number\n");
    scanf("%d",&N);
    while(i<=N)
    {
        printf("%d ",i*i*i);
        i++;
    }
    return 0;
}