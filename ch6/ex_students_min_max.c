#include <stdio.h>
#define STUDENTS 3
#define EXAMS    4

int getMin(int grades[][EXAMS], size_t rows, size_t columns);
int getMax(int grades[][EXAMS], size_t rows, size_t columns);
void printArray(int grades[][EXAMS], size_t rows, size_t columns);

int
main(void)
{
    int grades[STUDENTS][EXAMS] = {
        { 77, 68, 86, 73 },
        { 96, 87, 89, 78 },
        { 70, 90, 86, 81 }
    };

    printArray(grades, STUDENTS, EXAMS);
    printf("\nWorst grade: %d\n", getMin(grades, STUDENTS, EXAMS));
    printf("Best grade: %d\n", getMax(grades, STUDENTS, EXAMS));
}

int
getMin(int grades[][EXAMS], size_t rows, size_t columns)
{
    int min = 100;
    for (size_t i = 0; i < rows; i++)
        for (size_t j = 0; j < columns; j++)
            if (grades[i][j] < min)
                min = grades[i][j];
    return min;
}

int
getMax(int grades[][EXAMS], size_t rows, size_t columns)
{
    int max = 0;
    for (size_t i = 0; i < rows; i++)
        for (size_t j = 0; j < columns; j++)
            if (grades[i][j] > max)
                max = grades[i][j];
    return max;
}

void
printArray(int grades[][EXAMS], size_t rows, size_t columns)
{
    puts("-------[Grades]-------");
    for (size_t i = 0; i < rows; i++) {
        printf("Student %zu: ", i + 1);
        for (size_t j = 0; j < columns; j++)
            printf("%d ", grades[i][j]);
        printf("\n");
    }
}
