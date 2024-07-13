#include <stdio.h>
#define SIZE 100

int linearSearchRecursive(const int array[], int key, size_t size);

int
main(void)
{

    int a[SIZE] = { 0 };
    for (size_t x = 0; x < SIZE; ++x) {
        a[x] = 2 * x;
    }

    printf("Enter integer search key: ");
    int searchKey = 0;
    scanf("%d", &searchKey);

    int subscript = linearSearchRecursive(a, searchKey, SIZE);
    if (subscript != -1)
        printf("Found value at subscript %d\n", subscript);
    else
        puts("Value not found");
}

int
linearSearchRecursive(const int array[], int key, size_t size)
{
    if (size == 0)
        return -1;
    if (array[size - 1] == key)
        return size - 1;
    return linearSearchRecursive(array, key, size - 1);
}