#include <stdio.h>
#include <math.h>
#include <stdbool.h>
void Area_Circle();
void Area_Square();
void Area_Rectangle();

void Area_Circle()
{
    int r;
    float pi=3.141;
    printf("Enter the Radius:");
    scanf("%d", &r);
    printf("Area of the Circle with radius (%d) is: %f",r,pi*pow(r,2));
}
void Area_Square()
{
    int l;
    printf("Enter the Length:");
    scanf("%d", &l);
    printf("Area of the Square with length (%d) is: %f",l,pow(l,2)); 
}
void Area_Rectangle()
{
    int l,w; 
    printf("Enter the Length:");
    scanf("%d", &l);
    printf("Enter the Width:");
    scanf("%d", &w);
    printf("Area of the Rectangle with length (%d) and  width (%d) is: %f",l,w,l*w);  
}

int main()
{
    
    bool e=true;
    while(e)
    {
    printf("\n C.Area of the Circle.");
    printf("\n R.Area of the Rectangle.");
    printf("\n S.Area of the Square.");
    char ch;
    printf("\n Enter the Choice: ");
    
    scanf("%c",&ch);
        switch(ch)
        {

            case 'C':
            Area_Circle();
            break;

            case 'R':
            Area_Rectangle();
            break;

            case 'S':
            Area_Square();
            break;

            default:
            e=false;
            break;
        }
    }
}