#include <stdio.h>
#include <stdlib.h>

int main()
{
    problem3();
    return 0;
}


int problem1()
{
    float a, b, res;
    char c;
    printf("enter the first digit :");
    scanf("%f", &a);
    printf("enter the second digit :");
    scanf("%f", &b);
    printf ("enter the operator :");
    scanf(" %c", &c);
    switch(c)
  {
    case '+': res=a+b;
    printf("\n The sum is %.3f",res);
    break;

    case '-': res=a-b;
    printf("\n The difference is %.3f",res);
    break;

    case '*': res=a*b;
    printf("\n The product is %.3f",res);
    break;

    case '/': res=a/b;
    printf("\n The quotient is %.3f",res);
    break;

    default: printf ("\n Invalid entry");
  }
    return 0;
}

int problem2()
{
    float u, t, a = 9.8;
    printf("Please enter the initial velocity : ");
    scanf("%f", &u);
    printf("Please enter the traveled time : ");
    scanf("%f", &t);
    printf("The distance traveled is %.3f", ((u*t) + (0.5*a*t*t)));
}

int problem3()
{
    int choice;
    float money;
    char unit[3];
    printf("Please enter the value currency to be converted :");
    scanf("%f %s", &money, &unit);
    for (int i = 0 ; i < 3 ; i++)
    {
        unit[i] = tolower(unit[i]);
    }
    if (strcmp(unit, "thb") == 0)
    {
        printf("Enter number of choice you want from below\n");
        printf("1 --> THB to USD\n2 --> THB to NOK\n");
        scanf("%d", &choice);
        if(choice == 1)
        {
            printf("%f %s is equal to %.2f USD\n", money, unit, (money/32.5));
        }
    }
}
