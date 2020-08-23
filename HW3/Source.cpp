#include <stdio.h>
int main()
{
    int num1, num2, j, k, d;
    scanf_s("%d %d", &num1, &num2);
    for (int i = 1; i <= num1 && i <= num2; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            j = i;
        }
    }
    k = num1 / j;
    d = num2 / j;

    printf("LCM is %d", j * k * d);
    return 0;
}