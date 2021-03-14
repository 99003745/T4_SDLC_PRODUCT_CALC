#include "unity.h"
#include<calc_bmi_area.h>
#include <calculator_arithmetic.h>
#include"roots_cubes.h"
#include<equation_operation.h>
#define PROJECT_NAME    "Calculator_Test"

void test_sum(void);
void test_sub(void);
void test_mul(void);
void test_divide(void);



void test_bmi(int w,int h);
void test_areac(float r);
void test_arear(int l,int b);
void test_areas(int s);


void test_square(void);
void test_cube(void);
void test_squarroot(void);
void test_cubroot(void);

void test_equation(void);



/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */

  RUN_TEST(test_equation);

  RUN_TEST(test_sum);
  RUN_TEST(test_sub);
  RUN_TEST(test_mul);
  RUN_TEST(test_divide);

  RUN_TEST(test_bmi);
  RUN_TEST(test_areac);
  RUN_TEST(test_arear);
  RUN_TEST(test_areas);

  RUN_TEST(test_square);
  RUN_TEST(test_cube);
  RUN_TEST(test_squarroot);
  RUN_TEST(test_cubroot);

   return UNITY_END();
}


void test_sum(void) {
  TEST_ASSERT_EQUAL(30.0000, sum(10, 20));
  TEST_ASSERT_EQUAL(-10.0000, sum(10, -20));
}

void test_sub(void) {
  TEST_ASSERT_EQUAL(-3.0000, sub(0, 3));
  
  
  TEST_ASSERT_EQUAL(100.0000, sub(1000, 900));
}

void test_mul(void) {
  TEST_ASSERT_EQUAL(0.0000, mul(1, 0));
  
  
  TEST_ASSERT_EQUAL(10.0000, mul(2, 5));
}

void test_divide(void) {
  TEST_ASSERT_EQUAL(0.0000, divide(0,1));
  
  
  TEST_ASSERT_EQUAL(1.0000, divide(2, 2));
}

void test_bmi(int w,int h) {
  TEST_ASSERT_EQUAL(1, bmi(100, 10));
  TEST_ASSERT_EQUAL(2, bmi(800,20));
}
void test_areac(float r) {
 
  
  TEST_ASSERT_EQUAL(50.28, areac(4));
}
void test_arear(int l,int b) {
  TEST_ASSERT_EQUAL(33, arear(11, 3));
  
  
  TEST_ASSERT_EQUAL(900000, arear(1000, 900));
}

void test_areas(int s) {
  TEST_ASSERT_EQUAL(1, areas(1));
  
  
  TEST_ASSERT_EQUAL(4, areas(2));
}


void test_square(void) {
  TEST_ASSERT_EQUAL(1, square(1));
  TEST_ASSERT_EQUAL(4, square(2));
}


void test_equation(void)
{
    TEST_ASSERT_EQUAL(-2, equation(1,-5,-14));
}

void test_cube(void) {
  TEST_ASSERT_EQUAL(27, cube(3));
  
  
  TEST_ASSERT_EQUAL(1000, cube(10));
}

void test_squarroot(void) {
  TEST_ASSERT_EQUAL(2, squarroot(4));
  
  
  TEST_ASSERT_EQUAL(3, squarroot(9));
}

void test_cubroot(void) {
  TEST_ASSERT_EQUAL(3, cubroot(27));
  
  
  
}







