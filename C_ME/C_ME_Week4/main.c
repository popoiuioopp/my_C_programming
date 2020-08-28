#include <stdio.h>
#include <stdlib.h>

int main()
{
    problem3();
    return 0;
}

int problem1()
{
    char name[10];
    int age;
    float height;
    printf("Name, age, height\n");
    scanf("%s %d %f", &name, &age, &height);
    printf("Name:%5s\nAge:%d\nHeight:%.2f", name, age, height);
    return 0;
}

int problem2()
{
    float initial;
    float interest;
    printf("Enter the initial amount: ");
    scanf("%f", &initial);
    printf("Enter the interest rate: ");
    scanf("%f", &interest);
    printf("Final amount is %.2f\n", initial+(interest*initial/100));
}

int problem3()
{
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);
    for(int i = 0; i < 8; i++)
    {
        printf("%d\n", number);
        number = number >> 1;
    }
}
