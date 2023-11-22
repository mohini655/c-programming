#include <stdio.h>
void swap(int *i, int *j)
{
    int temp = *i;
    *i = *j;
    *j = temp;
}
void heapify(int *arr, int n, int i)
{
    int largest = i;
    int l = 2 * i;
    int r = (2 * i) + 1;
    if (l <= n && arr[l] > arr[largest])
    {
        largest = l;
    }
    if (r <= n && arr[r] > arr[largest])
    {
        largest = r;
    }
    if (largest != i)
    {
        swap(&arr[largest], &arr[i]);
        heapify(arr, n, largest);
    }
}
void print(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void heap_sort(int *arr, int n)
{
    for (int i = n / 2; i > 0; i--)
    {
        heapify(arr, n, i);
    }
    printf("heapified array : ");
    print(arr, n + 1);
    for (int i = n; i > 0; i--)
    {
        swap(&arr[1], &arr[i]);
        heapify(arr, i - 1, 1);
    }
}
int main()
{
    int arr[] = {-1, 3, 7, 54, 8, 0, 13, 6};
    int n = 7;
    heap_sort(arr, n);
    printf("sorted array : ");
    print(arr, n + 1);
}