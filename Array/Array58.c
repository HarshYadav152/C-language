#include <stdio.h>

int main()
{
    int n;
    int arr[n];
    int s = 0;
    float avg;
    printf("Enter how many element in the array : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d index element :", i);
        scanf("%d", &arr[i]);
    }
    for (int j = 0; j < n; j++)
    {
        printf("Arrays value at %d index element %d\n", j, arr[j]);
    }

    for (int i = 0; i < n; i++)
    {
        s = s + arr[i];
    }
    avg = (float)s / 5;
    printf("Sum of element of 1D array is %d\n", s);
    printf("Average of element of 1D array is %f", avg);
    return 0;
}

// void sumAvg(int array)
// {
//     int s=0;
//     float avg;
//     for (int i = 0; i < n; i++)
//     {
//         s=s+array[i];
//     }
//     avg=(float) s/5;
//     printf("Sum of element of 1D array is %d\n",s);
//     printf("Average of element of 1D array is %f",avg);

// }

    // sumAvg(arr);