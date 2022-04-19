#include <stdio.h>

int main()
{
    int n1, n2, n3, n4, n5;
    int sum;
    float avg;

    int addNum(int, int, int, int, int);
    float averageNum(int, int, int, int, int);

    printf("Enter the 5 numbers: \n");
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);

    sum = addNum(n1, n2, n3, n4, n5);
    avg = averageNum(n1, n2, n3, n4, n5);

    printf("\n Average: %f\n", avg);

    return 0;
}
   int addNum(int a, int b, int c, int d, int e)
{
    int sum;
    sum = a + b + c + d + e;
    return sum;
}
   float averageNum(int a, int b, int c, int d, int e)
{
    float average;
    return ((float)(a) + (float)(b) + (float)(c) + (float)(d) + (float)(e)) / 5;
}
