#include<stdio.h>
int avg_temp(int temp[][7],int n)
{
     for(int i=0;i<n;i++)
    {   
        int sum =0;
        for(int j=0;j<7;j++)
        {
            sum+=temp[i][j];
        }
        float avg=(float)sum/7;
        printf("AVG TEMP OF CITY-%d:%.2f",i+1,avg);
        printf("\n");
    }
}
int main()
{   int n;
    printf("Enter number of cities:");
    scanf("%d",&n);
    int temp[n][7];

    for(int i=0;i<n;i++)
    {   
        int t;
        for(int j=0;j<7;j++)
        {
            printf("Enter temperarature of City-%d for day %d:",i+1,j+1);
            scanf("%d",&t);
            temp[i][j]=t;

        }
        printf("\n");
    }
    for(int i=0;i<n;i++)
    {   
        printf("Temp of City-%d: ",i+1);
        for(int j=0;j<7;j++)
        {
            printf("%d ",temp[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    avg_temp(temp,n);
return 0;
}