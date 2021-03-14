#include"calculator_arithmetic.h"
#include<stdio.h>

int NumberLengthCheck(double number)
{
    int count=0;
    while(number!=0)
    {
        number=number/10;
        count++;
    }
    if(count>14)
    {
        return -1;
    }
    else
    {
        return 1;
    }
}

double sum(double num1,double num2)
{
    double add;
    add=num1+num2;
    return add;
}

double sub(double num1,double num2)
{
    double sub;
    sub=num1-num2;
    return sub;
}


double mul(double num1,double num2)
{
    double mul;
    mul=num1*num2;
    return mul;
}

double divide(double num1,double num2)
{
    double div;
    div=num1/num2;
    if(num2==0)
    {
        return 0;
    }
    else
    {
        return div;
    }
}

