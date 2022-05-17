#include<stdio.h>
int main()
{
    int n, sum = 0;
    int d;
    do{
        printf("Finding the Mean of N Nnubers\n");
        printf("Enter integer: ");
        scanf("%d",&n);

    sum+=n;

    }
       while(n!=0.0);
       printf("Average: %d", sum/5);

return 0;
}