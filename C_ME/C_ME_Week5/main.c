#include <stdio.h>
#include <stdlib.h>

int main()
{
    problem1();
    printf("\n==================\n");
    problem2();
    printf("\n==================\n");
    problem3();
    printf("\n==================\n");
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
    printf("The sum is %.2f \n",res);
    break;

    case '-': res=a-b;
    printf("The difference is %.2f \n",res);
    break;

    case '*': res=a*b;
    printf("The product is %.2f \n",res);
    break;

    case '/': res=a/b;
    printf("The quotient is %.2f \n",res);
    break;

    default: printf ("Invalid entry \n");
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

    if (money < 0)
    {
        printf("Please enter the correct amount\n");
        return 0;
    }

    if (strcmp(unit, "thb") == 0)
    {
        printf("Enter number of choice you want from below\n");
        printf("1 --> THB to USD\n2 --> THB to NOK\n");
        scanf("%d", &choice);
        if(choice == 1)
        {
            printf("%.2f %s is equal to %.2f USD\n", money, unit, (money/32.5));
        }
        else if(choice == 2)
        {
            printf("%.2f %s is equal to %.2f NOK\n", money, unit, (money/3.8));
        }
    }
        else if (strcmp(unit, "usd") == 0)
    {
        printf("Enter number of choice you want from below\n");
        printf("1 --> USD to THB\n2 --> USD to NOK\n");
        scanf("%d", &choice);
        if(choice == 1)
        {
            printf("%.2f %s is equal to %.2f THB\n", money, unit, (money*32.5));
        }
        else if(choice == 2)
        {
            printf("%.2f %s is equal to %.2f NOK\n", money, unit, (money*(32.5/3.8)));
        }
    }
    else if (strcmp(unit, "nok") == 0)
    {
        printf("Enter number of choice you want from below\n");
        printf("1 --> NOK to THB\n2 --> NOK to USD\n");
        scanf("%d", &choice);
        if(choice == 1)
        {
            printf("%.2f %s is equal to %.2f THB\n", money, unit, (money*3.8));
        }
        else if(choice == 2)
        {
            printf("%.2f %s is equal to %.2f USD\n", money, unit, (money*(3.8/32.5)));
        }
    }
    else
    {
        printf("Please enter the correct amount\n");
    }
    return 0;
}
