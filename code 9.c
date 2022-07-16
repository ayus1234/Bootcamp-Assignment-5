//Program to print cubes of the first N natural numbers

#include<stdio.h>
int main()
{
    int N,i;
    printf("Enter the number\n");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
        printf("%d ",i*i*i);
    return 0;
}