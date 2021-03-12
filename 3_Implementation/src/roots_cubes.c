#include <roots_cubes.h>
 
/*
int root_cubes()
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
        printf("ans=%f\n",cubroot);
        break;

       

    }
    return 0;

}
*/

/** 
* @file calculator_operations.h
* Calculator application with 4 mathematical operations
*
*/
//#ifndef __ROOTS_CUBES_H__
//#define __ROOTS_CUBES_H__

#include <stdio.h>
#include <math.h>

//#include <stdio_ext.h>

/**
*  squares the num1  and returns the result
* @param[in] num1 
* 
* @return Result of num1 * num1
*/
int square(int num1)
{
    return(num1*num1);
}

/**
*  cubes the num1 and returns the result
* @param[in] num1 
* 
* @return Result of num1 * num1 * num1
*/
int cube(int num1)
{
    return(num1*num1*num1);
}

/**
*  squroot the num1 and returns the result
* @param[in] num1 
*  
* @return Result of sqrt(num1)
*/
int squarroot(int num1)
{
    return(sqrt(num1));
}


/**
* cuberoot the num1  and returns the result 
* @param[in] num1 
* @return Result of pow(num1, 1.0/3.0)
* 
* @return integer value of the cube root of num1
* 
*/
int cubroot(int num1)
{
    return(pow(num1,1.0/3.0));
}

//#endif  /* #define __CALCULATOR_OPERATIONS_H__ */