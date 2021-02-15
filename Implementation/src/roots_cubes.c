#include <roots_cubes.h>
 
int main()
{
    int operator;
    float num1,squr,cube,sqrroot,cubroot;
	
    printf("Enter an operator\n1:(For Square)\n2:(For Cube)\n3:(For Squareroot)\n4:(For Cuberoot)");
	
    scanf("%d",&operator);
	
    switch (operator) 
    {
        case 1:
		
		//user inputs number //
		
        printf("Enter First no.");
		scanf("%f",&num1);
		//square operation is executed
        squr=num1*num1;
        printf("ans=%f\n",squr);
        break;

        case 2:
        printf("Enter First no.");
        scanf("%f",&num1);
		
		//cube of the number//
		
        cube=num1*num1*num1;
        printf("ans=%f\n",cube);
        break;

        case 3:
        printf("Enter First no.");
        scanf("%f",&num1);
		
		//square root of the number is found by sqrt function //
		
        sqrroot= sqrt(num1);
        printf("ans=%f\n",sqrroot);
        break;

        case 4:
        printf("Enter First no.");
        scanf("%f",&num1);
		
		//pow function is being used to calculaye the cube root//
		
        cubroot=pow(num1,1.0/3.0);
        printf("ans=%f\n",div);
        break;

       

    }
    return 0;

}
