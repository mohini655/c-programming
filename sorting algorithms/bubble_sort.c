#include <stdio.h>

int main()
{
    int size;
    printf("enter size of array\n");
    scanf("%d", &size);
    int arr[size];
    printf("enter elements\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int temp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("sorted array\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}