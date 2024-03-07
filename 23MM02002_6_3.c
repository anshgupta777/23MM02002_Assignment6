#include <stdio.h>
void rev_array(int arr[], int start, int end) 
{
    if (start >= end)
    {
        return;
    }    
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    rev_array(arr, start + 1, end - 1);
}
int main() 
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter array element:\n");
        scanf("%d", &arr[i]);
    }
    printf("Original array: ");
    for (int i = 0; i < n; i++)
    {    
        printf("%d ", arr[i]); 
    }    
    printf("\n");
    rev_array(arr, 0, n - 1);
    
    printf("Reversed array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }    
    return 0;
}