#include "kinjal.h"

int w,h,r,s,l,b;
void bmi(int w,int h)
{
    
    printf("Weight of the customer in kg: \n");
	scanf("%d",&w);
    printf("Height of the customer in meter: \n");
	scanf("%d",&h);

    if(0 == h && 0 == w)
        printf("invalid");
    else
        printf("Body Mass Index of customer: %d\n",w/(h*h));
}

void areac(int r)
{
    
    printf("Radius of circle:\n");
    scanf("%d", &r);

    if(0 == r)
        printf("invalid");
    else
        printf("Area of circle = %d\n",(22/7)*(r*r));
}

void arear(int l, int b)
{
    printf("Length of rectangle: \n");
	scanf("%d",&l);
	
	printf("Breadth of rectangle: \n");
	scanf("%d",&b);

    if(0 == l && 0 == b)
        printf("invalid");
    else
        printf("Area of rectangle: %d\n",l * b);
}

void areas(int s)
{
    printf("Length of side of a square: \n");
	scanf("%d",&s);
    if(0 == s)
        printf("invalid");
    else
        printf("Area of Square: %.3f\n",s*s);
}
