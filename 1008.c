#include<stdio.h>
int main()
{
    int num, pay;
    float hours, salary;
    scanf("%d %d", &num, &pay);
    scanf("%f", &hours);
    salary=pay*hours;
    printf("NUMBER = %d\n", num);
    printf("SALARY = U$ %0.2f\n", salary);

    return 0;
}
