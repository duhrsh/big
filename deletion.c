#include <stdio.h>

int main()
{
    int n, i, pos;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter position to delete: ");
    scanf("%d", &pos);

    if (pos < 1 || pos > n)
    {
        printf("Invalid position!");
        return 1;
    }
    for (i = pos - 1; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    printf("Updated array after deletion: ");
    for (i = 0; i < n-1 ; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
