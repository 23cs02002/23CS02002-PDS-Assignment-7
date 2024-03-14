#include <stdio.h>
#include <string.h>

int larg_ele;
int largest_ele(int arr[], int len)
{
    if (len == 0)
    {
        return larg_ele;
    }

    if (arr[len - 1] > larg_ele)
    {
        larg_ele = arr[len - 1];
    }
    return largest_ele(arr, len - 1);
}

int main()
{
    int num_ele;
    printf("Enter the number of elements in the array:\n");
    scanf("%d", &num_ele);

    if (num_ele > 0)
    {
        int arr[num_ele];
        printf("Enter the elements of the array:\n");
        for (int i = 0; i < num_ele; i++)
        {
            scanf("%d", &arr[i]);
        }

        larg_ele = arr[0];

        printf("Largest element: %d", largest_ele(arr, num_ele));
    }

    else
    {
        printf("Invalid input");
    }

    return 0;
}