#include <stdio.h>
int main()
{
    int i, j, val, n = 5;
    int min;
    int arr[5] = {8, 17, 34, 21, 7};
    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        val = arr[i];
        arr[i] = arr[min];
        arr[min] = val;
    }
    printf("Sorted array:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
