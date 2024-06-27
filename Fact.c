#include <stdio.h>
int factorial();
int main()
{
    int n;
    printf("Enter any Number: ");
    scanf("%d", &n);
    printf("Factorial of the number %d is: %d",n,factorial(n)); 
    return 0;
}
int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return n*factorial(n-1);
    }
}