#include <roots_cubes.h>
 
/** 
* @file calculator_operations.h
* Calculator application with 4 mathematical operations
*
*/
//#ifndef __ROOTS_CUBES_H__
//#define __ROOTS_CUBES_H__

#include <stdio.h>
#include <math.h>



/**
*  squares the number  and returns the result
* @param[in] num1 
* 
* @return Result of num1 * num1
*/
int square(int num1)
{
    return(num1*num1);
}

/**
*  cubes the number and returns the result
* @param[in] num1 
* 
* @return Result of num1 * num1 * num1
*/
int cube(int num1)
{
    return(num1*num1*num1);
}

/**
*  squreroot the number and returns the result
* @param[in] num1 
*  
* @return Result of sqrt(num1)
*/
int squarroot(int num1)
{
    return(sqrt(num1));
}


/**
* cuberoot the number  and returns the result 
* @param[in] num1 
* @return Result of pow(num1, 1.0/3.0)
* 
* @return integer value of the cube root of num1
* 
*/
int cubroot(int num1)
{
    return(pow(num1,(1.0/3.0)));      
}

//#endif  /* #define __CALCULATOR_OPERATIONS_H__ */