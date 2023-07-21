#include <stdio.h>
int main()
{
    int count = 0;
    int sum = 1;
    int total = 0;

    while (sum > 0)
    {
        printf("insert number: ");
        scanf("%d",&sum);
        total += sum;
        count++;   
    }
    printf("total :%d \n", total);
    printf("average : %.2f \n" ,(float)total/(float)(count-1));
}
