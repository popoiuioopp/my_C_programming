#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int number;
    printf("Put in the number : ");
    scanf("%d", &number);
    isPrime(number);
    return 0;
}

int isPrime(int number)
{
    double temp = sqrt((double)number);
    if (number == 1)
    {
        printf("NOT PRIME");
        return 0;
    }

    for (int i = 2; i < temp; i++)
    {
        if ((int) number % i == 0)
        {
            printf("NOT PRIME");
            return 0;
        }
    }
    printf("IS PRIME");
    return 1;
}
