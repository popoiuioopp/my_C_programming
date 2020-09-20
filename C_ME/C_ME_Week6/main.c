#include <stdio.h>
#include <stdlib.h>

int main()
{
    //problem1();
    printf("===============\n");
    problem2();
    printf("===============\n");
    return 0;
}

int problem1()
{
    int n;
    char character;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    printf("Enter the character: ");
    scanf(" %c", &character);
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            printf("%c", character);
        }
    printf("\n");

    }
}

int problem2()
{
    int sum = 0, temp, n = 5;
    for (int i = 0; i < n; i++)
    {
        printf("Please enter %d number here :", i+1);
        scanf("%d", &temp);
        sum = sum + temp;
    }
    printf("\n%d\n", sum);
}
