#include <stdio.h>

int main()
{
    int n, i, pos, value;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n + 1];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter position and value to insert: ");
    scanf("%d %d", &pos, &value);

    if (pos < 1 || pos > n)
    {
        printf("Invalid position!");
        return 1;
    }
    for (i = n; i >= pos; i--)
        arr[i] = arr[i - 1];

    arr[pos - 1] = value;

    printf("Updated array: ");
    for (i = 0; i <= n; i++)
        printf("%d ", arr[i]);

    return 0;
}
