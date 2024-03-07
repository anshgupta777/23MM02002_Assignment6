#include<stdio.h>
int main(){
    int arr1[20];
    int arr2[20];
    int num1;
    int num2;
    printf("Enter number of elements you want to enter in arr1[]: ");
    scanf("%d",&num1);
    for (int i = 0; i < num1; i++)
    {
        printf("Enter digit %d: ",i+1);
        scanf("%d",&arr1[i]);
    }
    printf("Enter number of elements you want to enter in arr2[]: ");
    scanf("%d",&num2);
    for (int i = 0; i < num2; i++)
    {
        printf("Enter digit %d: ",i+1);
        scanf("%d",&arr2[i]);
    }
    printf("Elements in arr1[] is: ");
    for (int i = 0; i < num1; i++)
    {
        printf("%d ",arr1[i]);
    }
    printf("\nElements in arr2[] is: ");
    for (int i = 0; i < num2; i++)
    {
        printf("%d ",arr2[i]);
    }
    int rep=0;
    for (int i = 0; i < num2; i++)
    {
        rep=0;
        for (int j=0; j < num1; j++)
        {
            
            if (arr2[i]==arr1[j])
            {
                rep=1;
                break;
            }
        }
        if (rep==0)
        {
            printf("\narr2[] is not a subset of arr1[]");
            break;
        }    
    }
    if(rep==1)
    {
        printf("\narr2[] is a subset of arr1[]");
    }
    return 0;
}