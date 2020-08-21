#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int number;
    printf("Put in the number : ");
    scanf("%d", &number);
    int count =0;
    int i = 1;

    while (i < 10000){
        compare(i);
        if(compare(i) == 0)
        {
            count++;
        }
        i++;
    }
    printf("%d", count);
}

int isPrime(int number)
{
    double temp = sqrt((double)number);
    if (number == 1)
    {
        //printf("%d IS NOT PRIME\n", number);
        return 0;
    }

    for (int i = 2; i < temp; i++)
    {
        if ((int) number % i == 0)
        {
            //printf("%d IS NOT PRIME\n", number);
            return 0;
        }
    }
    //printf("%d IS PRIME\n", number);
    return 1;
}

int isPrimeL(int primeNum)
{
    //printf("%d",primeNum);
    const int length = 4;
    int checkList[] = {2,3,5,7};
    int temp;
    int result;
    if (primeNum == 1){
        //printf("phor mueng die");
        return 0;
    }
    for(int i = 0; i < length; i++){
        temp = checkList[i];
        if (primeNum % temp  == 0){
            if (primeNum != temp){
                result = 1;
            break;
            }
        }
        else{
            result = 0;
        }
    }
    if (result == 1){
        //printf("not prime desu\n");
        return 0;
    }
    else{
        //printf("prime desu\n");
        return 1;
    }
    return 0;
}

int compare(int number)
{
    if (isPrime(number) != isPrimeL(number))
    {
        printf("%d is not the same!\nBoss=%d and Lucky=%d\n", number, isPrime(number), isPrimeL(number));
        return 0;
    }
    return 1;
}
