#include<calculator_arithmetic.h>
void calculator_arithmetic()

{
    int operator,first,second;
    float num1,num2,sum,sub,mul,div,mod;
    printf("Enter an operator\n1:(For Sum)\n2:(For Difference)\n3:(For Multiplication)\n4:(For Division)\n5:(For Modulus)");
   scanf("%d",&operator);
    switch (operator) 
    {
        case 1:
        printf("Enter First no.");
        scanf("%f",&num1);
        printf("Enter Second no.");
        scanf("%f",&num2);
        sum=num1+num2;
        printf("ans=%f\n",sum);
        break;

        case 2:
        printf("Enter First no.");
        scanf("%f",&num1);
        printf("Enter Second no.");
        scanf("%f",&num2);
        sub=num1-num2;
        printf("ans=%f\n",sub);
        break;

        case 3:
        printf("Enter First no.");
        scanf("%f",&num1);
        printf("Enter Second no.");
        scanf("%f",&num2);
        mul=num1*num2;
        printf("ans=%f\n",mul);
        break;

        case 4:
        printf("Enter First no.");
        scanf("%f",&num1);
        printf("Enter Second no.");
        scanf("%f",&num2);
        div=num1/num2;
        printf("ans=%f\n",div);
        break;

        case 5:
        printf("Enter First no.");
        scanf("%d",&first);
        printf("Enter Second no.");
        scanf("%d",&second);
        mod=first%second;
        printf("ans=%f\n",mod);
        break;

    }
    

}
