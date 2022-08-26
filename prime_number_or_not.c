#include<stdio.h>
int main()
{
    int i,n,count=0;
    printf("Enter a number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0){
        count++;
    }
    }
    if(count==2)
        printf("the number is a prime number");
        else
        printf("the number is not a prime number");
    return 0;
}