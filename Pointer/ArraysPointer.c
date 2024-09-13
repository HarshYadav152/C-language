#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    int *ptr = &arr;

    printf("Value at position 3 in the array : %d\n", arr[2]);
    printf("The address of an first element of array :%d\n", &arr[0]);

    printf("The address of an first element of array :%d\n", arr);

    printf("The address of an second element of array :%d\n", &arr[1]);

    printf("The address of an second element of array :%d\n", arr + 1);

    printf("The address of an third element of array :%d\n", &arr[2]);

    printf("The address of an third element of array :%d\n", arr + 2);

    // arr++;   This is invalid statement because arr is a constant

    // ptr++;  This is a valid statement

    printf("\n");

    printf("The value at address of an first element of array :%d\n", *(&arr[0])); // dereferencing

    printf("The value at address of an first element of array :%d\n", *(arr)); // dereferencing

    printf("The value at address of an first element of array :%d\n", arr[0]);

    printf("The value at address of an second element of array :%d\n", *(&arr[1])); // dereferencing

    printf("The value at address of an second element of array :%d\n", *(arr + 1)); // dereferencing

    return 0;
}