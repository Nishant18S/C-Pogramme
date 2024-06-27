#include <stdio.h>
#include <stdbool.h>

int main()
{
    int a,b,n,add,sub,mul,div;

    bool c=true;
    while(c)
    {
        printf("\n0.EXIT");
        printf("\n1.ADDITION");
        printf("\n2.SUBTRACTION");
        printf("\n3.MULTIPLICATION");
        printf("\n4.DIVISION");
        printf("\nEnter any Choice: ");
        scanf("%d", &n);

        switch(n)
        {
        case 0:
                c = false; // Exit the loop
                printf("\nExiting the program. Thank you!\n");
                break;
        case 1:
        printf("Enter the 1st Number: ");
        scanf("%d",&a);
        printf("Enter the 2nd Number: ");
        scanf("%d",&b);
            add=a+b;
            printf("\nAddition of %d and %d is: %d",a,b,add);
            printf("\n");
            break;
        case 2:
        printf("Enter the 1st Number: ");
        scanf("%d",&a);
        printf("Enter the 2nd Number: ");
        scanf("%d",&b);
            sub=a-b;
            printf("\nSubtraction of %d and %d is: %d",a,b,sub);
            printf("\n");
            break;
        case 3:
        printf("Enter the 1st Number: ");
        scanf("%d",&a);
        printf("Enter the 2nd Number: ");
        scanf("%d",&b);
            mul=a*b;
            printf("\nMultiplication of %d and %d is: %d",a,b,mul);
            printf("\n");
            break;
        case 4:
        printf("Enter the 1st Number: ");
        scanf("%d",&a);
        printf("Enter the 2nd Number: ");
        scanf("%d",&b);
        if(b==0)
        {
            printf("%d cannot be zero!!!!!!",b);
            printf("\n");
        }
        else
        {
            div=a/b;
            printf("\nDivision of %d and %d is: %d",a,b,div);
            printf("\n");
        }
            break;
        default:
            printf("\nInvalid choice. Please enter a valid option.\n");
            break;
        }
    }

    return 0;
}
