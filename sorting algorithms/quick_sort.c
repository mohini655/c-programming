#include <stdio.h>
int partition(int *arr, int low, int high)
{
    int pivot = arr[low];
    int k = high;
    int temp;
    for (int i = high; i > low; i--)
    {
        if (arr[i] > pivot)
        {
            temp = arr[i];
            arr[i] = arr[k];
            arr[k] = temp;
            k--;
        }
    }
    temp = arr[k];
    arr[k] = arr[low];
    arr[low] = temp;
    return k;
}
// int pivot = arr[low];
// int i = low +  1;
// int j = high;
// int temp;
// do
// {
//     while(arr[i] <= pivot){
//         i++;
//     }
//     while(arr[j] > pivot){
//         j--;
//     }
//     if(i < j){
//         temp = arr[i];
//         arr[i] = arr[j];
//         arr[j] = temp;
//     }
// } while (i < j);
// temp = arr[low];
// arr[low] = arr[j];
// arr[j] = temp;
// return j;

void quick_sort(int *arr, int low, int high)
{
    if (high <= low)
    {
        return;
    }
    int pivot = partition(arr, low, high);
    quick_sort(arr, low, pivot - 1);
    quick_sort(arr, pivot + 1, high);
}

int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    quick_sort(arr, 0, 4);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
}

/*
# Quick Sort algorithm
def quick_sort(arr):
    if len(arr) <= 1:
        return arr  # Base case: an empty or single-element array is already sorted

    pivot = arr[0]  # Choose a pivot element (you can use different strategies)

    # Partition the array into three parts: elements less than, equal to, and greater than the pivot
    less_than_pivot = [x for x in arr if x < pivot]
    equal_to_pivot = [x for x in arr if x == pivot]
    greater_than_pivot = [x for x in arr if x > pivot]

    # Recursively sort the sub-arrays
    sorted_less = quick_sort(less_than_pivot)
    sorted_greater = quick_sort(greater_than_pivot)

    # Combine the sorted sub-arrays and the pivot to get the final sorted array
    sorted_arr = sorted_less + equal_to_pivot + sorted_greater

    return sorted_arr

# Example usage
my_list = [3, 6, 8, 10, 1, 2, 1]
sorted_list = quick_sort(my_list)
print(sorted_list)

*/