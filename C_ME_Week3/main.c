#include <stdio.h>
#include <stdlib.h>

int main()
{
    question1();
    printf("--------------\n");
    question2();
    printf("--------------\n");
    question3();
    printf("--------------\n");
    return 0;
}

int question1()
{
    char name[20];
    int age;
    float height;
    printf("What is your name? \n");
    scanf("%s", &name);
    printf("How old are you? \n");
    scanf("%d", &age);
    printf("How tall are you? \n");
    scanf("%f", &height);
    printf("Your name is %s. You are %d years old. Your height is %.2f centimeters.\n", name, age, height);
    return 0;
}

int question2()
{
    printf("%d%*s\n",10 , 15, "Bob Sen");
    printf("%d%*s\n",120 , 15, "Jhon Pat");
    printf("%d%*s\n",891 , 15, "Fan Kemt");
    return 0;
}

int question3()
{
    int number;
    printf("Please enter a number between 1 to 10: ");
    scanf("%d", &number);

    printf("%-5d\n%-5d\n%-5d\n%-5d\n%-5d\n",number+10000, number+1000, number+100, number+10, number+0);
    printf("%5d\n%5d\n%5d\n%5d\n%5d\n",number+0, number+10, number+100, number+1000, number+10000);

    return 0;
}
