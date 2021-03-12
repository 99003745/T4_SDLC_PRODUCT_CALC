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
int square(int num1);

/**
*  cubes the num1 and returns the result
* @param[in] num1 
* 
* @return Result of num1 * num1 * num1
*/
int cube(int num1);

/**
*  squroot the num1 and returns the result
* @param[in] num1 
*  
* @return Result of sqrt(num1)
*/
int squarroot(int num1);


/**
* cuberoot the num1  and returns the result 
* @param[in] num1 
* @return Result of pow(num1, 1.0/3.0)
* 
* @return integer value of the cube root of num1
* 
*/
int cubroot(int num1);

//#endif  /* #define __CALCULATOR_OPERATIONS_H__ */