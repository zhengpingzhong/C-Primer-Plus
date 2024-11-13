#include <stdio.h>
int main(void)
{
    double inch, cm;
    printf("Please input the inches: ");
    scanf("%lf", &inch);
    cm = inch * 2.54;
    // test di 三次提交
    printf("%g cm\n", cm);

    return 0;
}
