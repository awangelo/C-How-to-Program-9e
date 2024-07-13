#include <stdio.h>

void logic(int n, int start, int end);
int print(int start, int end);

int
main(void)
{
    int n;
    printf("Enter the number of disks: ");
    scanf("%d", &n);
    logic(n, 1, 3);
    return 0;
}

void
logic(int n, int start, int end)
{
    if (n == 1) {
        print(start, end);
        return;
    }
    int temp = 6 - start - end;
    logic(n - 1, start, temp);
    print(start, end);
    logic(n - 1, temp, end);
    return;
}

int
print(int start, int end)
{
    printf("Move disk from %d to %d\n", start, end);
    return 0;
}