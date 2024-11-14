#include <stdio.h>
int main()
{
    printf("Please input the inches.\n");
    double inch, cm;
    scanf("%1f", &inch);
    cm = inch * 2.54;
    printf("%g cm\n", cm);
    getchar();
    getchar();
    return 0;
}