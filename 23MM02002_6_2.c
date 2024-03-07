#include<stdio.h>
void great_avg(int arr[],int n)
{   
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    float avg =(float)sum/n;
    printf("\nAVERAGE:%.2f\n",avg);
    printf("Elements greater than avg:");
    for(int i=0;i<n;i++)
    {
        if(arr[i]>avg)
        {
            printf("%d ",arr[i]);
        }
    }

}
int main()
{   int n;
    printf("Enter array size:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {   
        printf("Enter array element:");
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    great_avg(arr,n);


}