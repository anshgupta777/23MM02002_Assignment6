#include<stdio.h>

int if_prime(int n)
{
    for(int i=2;i<=n/2;i++)
    {
        if (n%i==0)
        {
            return 0;
        }
    }
    return 1;
}


int main()
{   
    int llimit,ulimit;
    printf("Enter lower limit : ");
    scanf("%d",&llimit);
    printf("Enter upper limit : ");
    scanf("%d",&ulimit);
    int prime[100];
    int j=0;
    for(int i=llimit+1;i<=ulimit-1;i++)
    {
        if (if_prime(i))
        {
            prime[j++]=i;

        }
    }
    printf("Prime numbers between %d & %d are: ",llimit,ulimit);
    for(int i=0;i<j;i++)
    {
        printf("%d ",prime[i]);
    }
    return 0;
}
