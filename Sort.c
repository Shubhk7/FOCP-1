//  create a function to sort an array in ascending order using simple sorting algorithm
#include <stdio.h>

void sort(int arr[], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int num, i, arr[100];
    printf("Enter the number of elements in the array: ");
    scanf("%d", &num);
    for (i = 0; i < num; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    sort(arr, num);
    printf("Sorted array in ascending order: \n");
    for (i = 0; i < num; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
