#include <stdio.h>
int main()
{
    double A,B,C;
    scanf("%lf %lf %lf", &A, &B, &C);
    double weight_average = 2+3+5;
    double average = (((A*2)+(B*3)+(C*5)) / weight_average);
    printf("MEDIA = %0.1lf",average);
    return 0;
}